#include <iostream>
#include <vector>
#include <string>

class Conta {
private:
    int numero;
    std::string nome;
    double saldo;

public:
    Conta(int num, const std::string& nomeTitular)
        : numero(num), nome(nomeTitular), saldo(0.0) {}

    int getNumero() const { return numero; }
    std::string getNome() const { return nome; }
    double getSaldo() const { return saldo; }

    void depositar(double valor) {
        if (valor > 0)
            saldo += valor;
    }

    bool sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            return true;
        }
        return false;
    }

    void mostrarSaldo() const {
        std::cout << "Titular: " << nome << "\n";
        std::cout << "Saldo: R$ " << saldo << "\n";
    }
};

std::vector<Conta> contas;

Conta* buscarConta(int numero) {
    for (auto& conta : contas) {
        if (conta.getNumero() == numero)
            return &conta;
    }
    return nullptr;
}

void criarConta() {
    int numero;
    std::string nome;

    std::cout << "Número da nova conta: ";
    std::cin >> numero;
    if (buscarConta(numero)) {
        std::cout << "Conta já existe!\n";
        return;
    }

    std::cin.ignore();
    std::cout << "Nome do titular: ";
    std::getline(std::cin, nome);

    contas.emplace_back(numero, nome);
    std::cout << "Conta criada com sucesso!\n";
}

void verSaldo() {
    int numero;
    std::cout << "Número da conta: ";
    std::cin >> numero;

    Conta* conta = buscarConta(numero);
    if (conta) {
        conta->mostrarSaldo();
    } else {
        std::cout << "Conta não encontrada.\n";
    }
}

void depositarValor() {
    int numero;
    double valor;
    std::cout << "Número da conta: ";
    std::cin >> numero;

    Conta* conta = buscarConta(numero);
    if (conta) {
        std::cout << "Valor para depositar: R$ ";
        std::cin >> valor;
        conta->depositar(valor);
        std::cout << "Depósito realizado.\n";
    } else {
        std::cout << "Conta não encontrada.\n";
    }
}

void sacarValor() {
    int numero;
    double valor;
    std::cout << "Número da conta: ";
    std::cin >> numero;

    Conta* conta = buscarConta(numero);
    if (conta) {
        std::cout << "Valor para sacar: R$ ";
        std::cin >> valor;
        if (conta->sacar(valor)) {
            std::cout << "Saque realizado.\n";
        } else {
            std::cout << "Saldo insuficiente ou valor inválido.\n";
        }
    } else {
        std::cout << "Conta não encontrada.\n";
    }
}

int main() {
    int opcao;
    do {
        std::cout << "\n--- Menu Bancário ---\n";
        std::cout << "1. Criar conta\n";
        std::cout << "2. Ver saldo\n";
        std::cout << "3. Depositar\n";
        std::cout << "4. Sacar\n";
        std::cout << "0. Sair\n";
        std::cout << "Escolha: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: criarConta(); break;
            case 2: verSaldo(); break;
            case 3: depositarValor(); break;
            case 4: sacarValor(); break;
            case 0: std::cout << "Saindo...\n"; break;
            default: std::cout << "Opção inválida.\n"; break;
        }
    } while (opcao != 0);

    return 0;
}
