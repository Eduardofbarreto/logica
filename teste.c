#include <stdio.h>
#include <string.h>
#include <locale.h>

// Estrutura para representar um cadastro
struct Cadastro {
    char nome[50];
    char senha[50];
};

// Estrutura para representar uma venda
struct Venda {
    struct Cadastro cadastro;
    char produto[50];
    double valor;
    int quantidade;
    double total;
};

// Função para realizar o cadastro (análogo ao método logar)
void cadastrar(struct Cadastro *cadastro) {
    printf("Digite seu nome: \n");
    scanf("%s", cadastro->nome);
    printf("Digite sua senha: \n");
    scanf("%s", cadastro->senha);
    printf("\n");
}

// Função para exibir mensagem de boas-vindas
void boasVindas(const char *nome) {
    printf("Cadastro realizado com sucesso!\n");
    printf("Seja bem-vindo %s\n", nome);
    printf("\n");
}

// Função para exibir mensagem de login
void login(const char *nome) {
    printf("Que bom que você voltou %s!\n", nome);
    printf("\n");
}

// Função para obter informações sobre a mercadoria
void obterMercadoria(struct Venda *venda) {
    printf("Nome do produto: \n");
    scanf("%s", venda->produto);
    printf("Valor do produto: \n");
    scanf("%lf", &venda->valor);
    printf("Quantidade do produto: \n");
    scanf("%d", &venda->quantidade);
}

// Função para calcular o valor total da venda
void calcularTotal(struct Venda *venda) {
    if (venda->quantidade >= 2) {
        venda->total = venda->quantidade * venda->valor;
        printf("O valor foi de: R$ %.2f\n", venda->total);
    } else {
        venda->total = venda->valor;
        printf("O valor foi de: R$ %.2f\n", venda->total);
    }
}

// Função para exibir mensagem de conclusão da venda
void concluirVenda(const char *nome, const char *produto, double total) {
    printf("Parabéns %s!\n", nome);
    printf("Seu(ua) %s foi vendido com sucesso!\n", produto);
    printf("O valor foi de: R$ %.2f\n", total);
    printf("\n");
}

int main() {
    int opcaoEntrada;
    struct Venda minhaVenda;

    printf("Você já é cliente? \n");
    printf("1 - SIM\n");
    printf("2 - NÃO\n");
    scanf("%d", &opcaoEntrada);

    if (opcaoEntrada == 1) {
        cadastrar(&minhaVenda.cadastro);
        login(minhaVenda.cadastro.nome);
    } else {
        cadastrar(&minhaVenda.cadastro);
        boasVindas(minhaVenda.cadastro.nome);
    }

    obterMercadoria(&minhaVenda);
    calcularTotal(&minhaVenda);
    concluirVenda(minhaVenda.cadastro.nome, minhaVenda.produto, minhaVenda.total);

    return 0;
}