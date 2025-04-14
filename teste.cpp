#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sqlite3.h>
#include <limits> // Para numeric_limits

struct Produto {
    std::string codigo;
    std::string nome;
    std::string categoria_principal;
    std::map<std::string, std::string> detalhes;

    std::string toString() const {
        std::string info = "Código: " + codigo + "\nNome: " + nome + "\nCategoria: " + categoria_principal;
        for (const auto& pair : detalhes) {
            info += "\n" + pair.first + ": " + pair.second;
        }
        return info;
    }
};

class SistemaProdutosDB {
public:
    SistemaProdutosDB(const std::string& db_name = "teste.db") : db_name_(db_name), db_(nullptr) {
        if (sqlite3_open(db_name_.c_str(), &db_) != SQLITE_OK) {
            std::cerr << "Erro ao abrir o banco de dados: " << sqlite3_errmsg(db_) << std::endl;
            db_ = nullptr;
            return;
        }
        criarTabela();
    }

    ~SistemaProdutosDB() {
        if (db_) {
            sqlite3_close(db_);
            std::cout << "Conexão com o banco de dados fechada." << std::endl;
        }
    }

    bool adicionarProduto(const Produto& produto) {
        if (!db_) return false;
        sqlite3_stmt* stmt;
        const char* sql = "INSERT INTO produtos (codigo, nome, categoria_principal, tipo, quantidade_kg, unidade, tamanho_metros) VALUES (?, ?, ?, ?, ?, ?, ?)";
        if (sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Erro ao preparar a declaração SQL: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        sqlite3_bind_text(stmt, 1, produto.codigo.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, produto.nome.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 3, produto.categoria_principal.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 4, produto.detalhes.count("tipo") ? produto.detalhes.at("tipo").c_str() : nullptr, -1, SQLITE_STATIC);

        double quantidade_kg = produto.detalhes.count("quantidade (kg)") ? std::stod(produto.detalhes.at("quantidade (kg)")) : std::numeric_limits<double>::quiet_NaN();
        if (!std::isnan(quantidade_kg)) {
            sqlite3_bind_double(stmt, 5, quantidade_kg);
        } else {
            sqlite3_bind_null(stmt, 5);
        }

        sqlite3_bind_text(stmt, 6, produto.detalhes.count("unidade") ? produto.detalhes.at("unidade").c_str() : nullptr, -1, SQLITE_STATIC);

        double tamanho_metros = produto.detalhes.count("tamanho (metros)") ? std::stod(produto.detalhes.at("tamanho (metros)")) : std::numeric_limits<double>::quiet_NaN();
        if (!std::isnan(tamanho_metros)) {
            sqlite3_bind_double(stmt, 7, tamanho_metros);
        } else {
            sqlite3_bind_null(stmt, 7);
        }

        if (sqlite3_step(stmt) != SQLITE_DONE) {
            std::cerr << "Erro ao inserir produto: " << sqlite3_errmsg(db_) << std::endl;
            sqlite3_finalize(stmt);
            return false;
        }

        sqlite3_finalize(stmt);
        std::cout << "Produto '" << produto.nome << "' adicionado ao banco de dados com sucesso." << std::endl;
        return true;
    }

    void consultarTodos() const {
        if (!db_) return;
        sqlite3_stmt* stmt;
        const char* sql = "SELECT * FROM produtos";
        if (sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Erro ao preparar a declaração SQL: " << sqlite3_errmsg(db_) << std::endl;
            return;
        }

        std::cout << "\n--- Lista de Produtos no Banco de Dados ---" << std::endl;
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            Produto produto;
            produto.codigo = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
            produto.nome = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
            produto.categoria_principal = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
            const unsigned char* tipo = sqlite3_column_text(stmt, 3);
            if (tipo) produto.detalhes["tipo"] = reinterpret_cast<const char*>(tipo);
            if (sqlite3_column_type(stmt, 4) == SQLITE_FLOAT) {
                produto.detalhes["quantidade (kg)"] = std::to_string(sqlite3_column_double(stmt, 4));
            }
            const unsigned char* unidade = sqlite3_column_text(stmt, 5);
            if (unidade) produto.detalhes["unidade"] = reinterpret_cast<const char*>(unidade);
            if (sqlite3_column_type(stmt, 6) == SQLITE_FLOAT) {
                produto.detalhes["tamanho (metros)"] = std::to_string(sqlite3_column_double(stmt, 6));
            }
            std::cout << produto.toString() << "\n---" << std::endl;
        }
        sqlite3_finalize(stmt);
    }

    void consultarPorNome(const std::string& nome) const {
        if (!db_) return;
        sqlite3_stmt* stmt;
        const char* sql = "SELECT * FROM produtos WHERE nome LIKE ?";
        if (sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Erro ao preparar a declaração SQL: " << sqlite3_errmsg(db_) << std::endl;
            return;
        }
        std::string buscaNome = "%" + nome + "%";
        sqlite3_bind_text(stmt, 1, buscaNome.c_str(), -1, SQLITE_STATIC);

        std::cout << "\n--- Resultados para '" << nome << "' no Banco de Dados ---" << std::endl;
        bool encontrado = false;
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            Produto produto;
            produto.codigo = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
            produto.nome = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
            produto.categoria_principal = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
            const unsigned char* tipo = sqlite3_column_text(stmt, 3);
            if (tipo) produto.detalhes["tipo"] = reinterpret_cast<const char*>(tipo);
            if (sqlite3_column_type(stmt, 4) == SQLITE_FLOAT) {
                produto.detalhes["quantidade (kg)"] = std::to_string(sqlite3_column_double(stmt, 4));
            }
            const unsigned char* unidade = sqlite3_column_text(stmt, 5);
            if (unidade) produto.detalhes["unidade"] = reinterpret_cast<const char*>(unidade);
            if (sqlite3_column_type(stmt, 6) == SQLITE_FLOAT) {
                produto.detalhes["tamanho (metros)"] = std::to_string(sqlite3_column_double(stmt, 6));
            }
            std::cout << produto.toString() << "\n---" << std::endl;
            encontrado = true;
        }
        sqlite3_finalize(stmt);
        if (!encontrado) {
            std::cout << "Nenhum produto encontrado com o nome '" << nome << "' no banco de dados." << std::endl;
        }
    }

    void consultarPorCodigo(const std::string& codigo) const {
        if (!db_) return;
        sqlite3_stmt* stmt;
        const char* sql = "SELECT * FROM produtos WHERE codigo = ?";
        if (sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Erro ao preparar a declaração SQL: " << sqlite3_errmsg(db_) << std::endl;
            return;
        }
        sqlite3_bind_text(stmt, 1, codigo.c_str(), -1, SQLITE_STATIC);

        std::cout << "\n--- Produto Encontrado no Banco de Dados ---" << std::endl;
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            Produto produto;
            produto.codigo = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
            produto.nome = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
            produto.categoria_principal = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
            const unsigned char* tipo = sqlite3_column_text(stmt, 3);
            if (tipo) produto.detalhes["tipo"] = reinterpret_cast<const char*>(tipo);
            if (sqlite3_column_type(stmt, 4) == SQLITE_FLOAT) {
                produto.detalhes["quantidade (kg)"] = std::to_string(sqlite3_column_double(stmt, 4));
            }
            const unsigned char* unidade = sqlite3_column_text(stmt, 5);
            if (unidade) produto.detalhes["unidade"] = reinterpret_cast<const char*>(unidade);
            if (sqlite3_column_type(stmt, 6) == SQLITE_FLOAT) {
                produto.detalhes["tamanho (metros)"] = std::to_string(sqlite3_column_double(stmt, 6));
            }
            std::cout << produto.toString() << "\n---" << std::endl;
        } else {
            std::cout << "Nenhum produto encontrado com o código '" << codigo << "' no banco de dados." << std::endl;
        }
        sqlite3_finalize(stmt);
    }

    bool excluirProduto(const std::string& codigo) {
        if (!db_) return false;
        sqlite3_stmt* stmt;
        const char* sql = "DELETE FROM produtos WHERE codigo = ?";
        if (sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Erro ao preparar a declaração SQL: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }
        sqlite3_bind_text(stmt, 1, codigo.c_str(), -1, SQLITE_STATIC);

        if (sqlite3_step(stmt) != SQLITE_DONE) {
            std::cerr << "Erro ao excluir produto: " << sqlite3_errmsg(db_) << std::endl;
            sqlite3_finalize(stmt);
            return false;
        }

        int rowsAffected = sqlite3_changes(db_);
        sqlite3_finalize(stmt);
        if (rowsAffected > 0) {
            std::cout << "Produto com código '" << codigo << "' excluído do banco de dados com sucesso." << std::endl;
            return true;
        } else {
            std::cout << "Nenhum produto encontrado com o código '" << codigo << "' para exclusão." << std::endl;
            return false;
        }
    }

private:
    void criarTabela() {
        if (!db_) return;
        const char* sql = "CREATE TABLE IF NOT EXISTS produtos (codigo TEXT PRIMARY KEY, nome TEXT NOT NULL, categoria_principal TEXT NOT NULL, tipo TEXT, quantidade_kg REAL, unidade TEXT, tamanho_metros REAL)";
        char* errmsg = nullptr;
        if (sqlite3_exec(db_, sql, nullptr, nullptr, &errmsg) != SQLITE_OK) {
            std::cerr << "Erro ao criar a tabela: " << errmsg << std::endl;
            sqlite3_free(errmsg);
        }
    }

    std::string db_name_;
    sqlite3* db_;
};

Produto obterInfoProduto() {
    std::string codigo, nome, categoria_principal, tipo, unidade;
    std::string quantidade_str, tamanho_str;
    std::map<std::string, std::string> detalhes;

    std::cout << "Digite o código do produto (apenas números): ";
    std::cin >> codigo;
    if (!std::all_of(codigo.begin(), codigo.end(), ::isdigit)) {
        std::cout << "Erro: O código deve conter apenas números." << std::endl;
        return {}; // Retorna um produto vazio para indicar erro
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpar o buffer do teclado

    std::cout << "Digite o nome do produto: ";
    std::getline(std::cin, nome);

    std::cout << "Digite a categoria principal do produto (ex: pet, ferragem, jardinagem): ";
    std::getline(std::cin, categoria_principal);

    std::cout << "Digite o tipo do produto (ração, brinquedo, parafuso, mangueira, etc.): ";
    std::getline(std::cin, tipo);
    detalhes["tipo"] = tipo;

    if (categoria_principal == "pet" && tipo == "ração") {
        std::cout << "Digite a quantidade do pacote (em kg): ";
        std::cin >> quantidade_str;
        if (std::all_of(quantidade_str.begin(), quantidade_str.end(), ::isdigit) ||
            (std::count(quantidade_str.begin(), quantidade_str.end(), '.') <= 1 &&
             std::all_of(quantidade_str.begin(), quantidade_str.end(), [](char c){ return ::isdigit(c) || c == '.'; }))) {
            detalhes["quantidade (kg)"] = quantidade_str;
        } else {
            std::cout << "Erro: A quantidade deve ser um número." << std::endl;
            return {};
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else if (categoria_principal == "ferragem") {
        std::cout << "Digite a unidade de medida (ex: peças, kg, metros): ";
        std::getline(std::cin, unidade);
        detalhes["unidade"] = unidade;
    } else if (categoria_principal == "jardinagem" && tipo == "mangueira") {
        std::cout << "Digite o tamanho da mangueira (em metros): ";
        std::cin >> tamanho_str;
        if (std::all_of(tamanho_str.begin(), tamanho_str.end(), ::isdigit) ||
            (std::count(tamanho_str.begin(), tamanho_str.end(), '.') <= 1 &&
             std::all_of(tamanho_str.begin(), tamanho_str.end(), [](char c){ return ::isdigit(c) || c == '.'; }))) {
            detalhes["tamanho (metros)"] = tamanho_str;
        } else {
            std::cout << "Erro: O tamanho deve ser um número." << std::endl;
            return {};
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return {codigo, nome, categoria_principal, detalhes};
}

int main() {
    SistemaProdutosDB sistema_db;
    int opcao;

    do {
        std::cout << "\n--- Menu (Banco de Dados) ---" << std::endl;
        std::cout << "1. Adicionar Produto" << std::endl;
        std::cout << "2. Consultar Todos os Produtos" << std::endl;
        std::cout << "3. Consultar Produto por Nome" << std::endl;
        std::cout << "4. Consultar Produto por Código" << std::endl;
        std::cout << "5. Excluir Produto" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "Digite a sua opção: ";
        std::cin >> opcao;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpar o buffer

        switch (opcao) {
            case 1: