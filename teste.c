#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libpq-fe.h>

void inserirPessoa(PGconn *conn) {
    char nome[100];
    int idade;

    printf("Nome: ");
    getchar(); // consumir quebra de linha anterior
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    const char *paramValues[2];
    char idadeStr[10];

    snprintf(idadeStr, sizeof(idadeStr), "%d", idade);
    paramValues[0] = nome;
    paramValues[1] = idadeStr;

    PGresult *res = PQexecParams(conn,
        "INSERT INTO pessoas (nome, idade) VALUES ($1, $2)",
        2, NULL, paramValues, NULL, NULL, 0);

    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        printf("Erro ao inserir pessoa: %s", PQerrorMessage(conn));
    } else {
        printf("Pessoa inserida com sucesso!\n");
    }

    PQclear(res);
}

void listarPessoas(PGconn *conn) {
    PGresult *res = PQexec(conn, "SELECT id, nome, idade FROM pessoas ORDER BY id");

    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        printf("Erro ao listar pessoas: %s", PQerrorMessage(conn));
        PQclear(res);
        return;
    }

    int rows = PQntuples(res);
    printf("\n--- Lista de pessoas ---\n");
    for (int i = 0; i < rows; i++) {
        printf("ID: %s, Nome: %s, Idade: %s\n",
               PQgetvalue(res, i, 0),
               PQgetvalue(res, i, 1),
               PQgetvalue(res, i, 2));
    }

    PQclear(res);
}

void atualizarPessoa(PGconn *conn) {
    int id, idade;
    char nome[100];

    printf("ID da pessoa para atualizar: ");
    scanf("%d", &id);
    getchar();

    printf("Novo nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Nova idade: ");
    scanf("%d", &idade);

    char idStr[10], idadeStr[10];
    snprintf(idStr, sizeof(idStr), "%d", id);
    snprintf(idadeStr, sizeof(idadeStr), "%d", idade);

    const char *paramValues[3] = { nome, idadeStr, idStr };

    PGresult *res = PQexecParams(conn,
        "UPDATE pessoas SET nome=$1, idade=$2 WHERE id=$3",
        3, NULL, paramValues, NULL, NULL, 0);

    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        printf("Erro ao atualizar pessoa: %s", PQerrorMessage(conn));
    } else {
        printf("Pessoa atualizada com sucesso!\n");
    }

    PQclear(res);
}

void deletarPessoa(PGconn *conn) {
    int id;
    printf("ID da pessoa para deletar: ");
    scanf("%d", &id);

    char idStr[10];
    snprintf(idStr, sizeof(idStr), "%d", id);

    const char *paramValues[1] = { idStr };

    PGresult *res = PQexecParams(conn,
        "DELETE FROM pessoas WHERE id=$1",
        1, NULL, paramValues, NULL, NULL, 0);

    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        printf("Erro ao deletar pessoa: %s", PQerrorMessage(conn));
    } else {
        printf("Pessoa deletada com sucesso!\n");
    }

    PQclear(res);
}

int main() {
    const char *conninfo = "dbname=meu_novo_banco_de_dados user=postgres password=root host=localhost";
    PGconn *conn = PQconnectdb(conninfo);

    if (PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "Erro na conexão: %s", PQerrorMessage(conn));
        PQfinish(conn);
        return 1;
    }

    int opcao;
    do {
        printf("\n===== Menu CRUD pessoas =====\n");
        printf("1. Inserir pessoa\n");
        printf("2. Listar pessoas\n");
        printf("3. Atualizar pessoa\n");
        printf("4. Deletar pessoa\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: inserirPessoa(conn); break;
            case 2: listarPessoas(conn); break;
            case 3: atualizarPessoa(conn); break;
            case 4: deletarPessoa(conn); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 0);

    PQfinish(conn);
    return 0;
}
