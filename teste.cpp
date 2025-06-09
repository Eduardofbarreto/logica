#include<iostream>
#include<pqxx/pqxx>

void inserirPessoa(pqxx::connection &conn){
    std::string nome;
    int idade;

    std::cout<<"Nome: "<<std::endl;
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cout<<"Idade: "<<std::endl;
    std::cin>>idade;

    pqxx::work txn(conn);
    txn.exec_params("INSERT INTO pessoas (nome, idade) VALUES ($1, $2)", nome, idade);
    txn.commit();

    std::cout<<"Pessoa inserida com sucesso!"<<std::endl;

}

void listarPessoa(pqxx::connection &conn){
    pqxx::nontransaction txn(conn);
    pqxx::result r = txn.exec("SELECT id, nome, idade FROM pessoas ORDER BY id");

    std::cout<<"\n --- Lista de pessoas --- \n";
    for (const auto &row : r){
        std::cout<<"ID: "<<row["id"].as<int>()
                 <<", Nome: "<<row["nome"].as<std::string>()
                 <<", Idade: "<<row["idade"].as<int>()<<"\n";
    }
}

void atualizarPessoa(pqxx::connection &conn){
    int id;
    std::string nome;
    int idade;

    std::cout<<"ID d apessoa para atualizar: "<<std::endl;
    std::cin>>id;
    std::cin.ignore();

    std::cout<<"Novo nome: "<<std::endl;
    std::getline(std::cin, nome);
    std::cout<<"Nova idade: "<<std::endl;
    std::cin>>idade;

    pqxx::work txn(conn);
    txn.exec_params("UPDATE pessoas SET nome=$1, idade=$2 WHERE id=$3", nome, idade, id);
    txn.commit();

    std::cout<<"Pessoa atualizada com sucesso!"<<std::endl;
}

void deletarPessoa(pqxx::connection &conn){
    int id;
    std::cout<<"ID da pessoa para deletar: "<<std::endl;
    std::cin>>id;

    pqxx::work txn(conn);
    txn.exec_params("DELETE FROM pessoas WHERE id=$1", id);
    txn.commit();

    std::cout<<"Pessoa deletada com sucesso!"<<std::endl;
}

int main(){

    try{
        pqxx::connection conn("dbname=meu_novo_banco_de_dados user=postgres password=root host=localhost");

        if(!conn.is_open()){
            std::cerr<<"Erro ao conectar no banco de dados!"<<std::endl;
            return 1;
        }

        int opcao;
        do{
            std::cout<<"\n ===== Menu CRUD pessoas ====="<<std::endl;
            std::cout<<"1. Inserir pessoa"<<std::endl;
            std::cout<<"2. Listar pessoas"<<std::endl;
            std::cout<<"3. Atualizar pessoa"<<std::endl;
            std::cout<<"4. Deletar pessoa"<<std::endl;
            std::cout<<"0. Sair"<<std::endl;
            std::cin>>opcao;

            switch(opcao){
                case 1: inserirPessoa(conn);break;
                case 2: listarPessoa(conn);break;
                case 3: atualizarPessoa(conn);break;
                case 4: deletarPessoa(conn);break;
                case 0: std::cout<<"Saindo...\n";break;
                default:std::cout<<"Opção inválida!\n";break;
            }
        }while(opcao != 0);

        conn.disconnect();
    }catch (const std::exception &e){
        std::cerr<<"Erro "<<e.what()<<std::endl;
        return 1;
    }

    return 0;

}