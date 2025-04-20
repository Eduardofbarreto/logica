#include <iostream>
#include <string>

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

enum Status {
    ATIVO,
    INATIVO,
    PENDENTE
};

struct Tarefa {
    std::string descricao;
    Status estado;
    Level prioridade; // Usando o enum Level definido anteriormente

    void exibir_status() const {
        std::string status_str;
        switch (estado) {
            case ATIVO:
                status_str = "Ativa";
                break;
            case INATIVO:
                status_str = "Inativa";
                break;
            case PENDENTE:
                status_str = "Pendente";
                break;
            default:
                status_str = "Desconhecido";
                break;
        }
        std::cout << "Tarefa: " << descricao << ", Status: " << status_str << ", Prioridade: " << prioridade << std::endl;
    }
};

int main() {
    Tarefa minha_tarefa;
    minha_tarefa.descricao = "Implementar funcionalidade X";
    minha_tarefa.estado = ATIVO;
    minha_tarefa.prioridade = HIGH;
    minha_tarefa.exibir_status();

    return 0;
}