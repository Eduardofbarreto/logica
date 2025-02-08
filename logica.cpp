#include <iostream>
#include <string>

int main() {
    // Declaração do array de caracteres com 7 posições
    std::string dias[7] = {
        "Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira",
        "Quinta-feira", "Sexta-feira", "Sábado"
    };

    // Leitura do número do usuário
    int numero;
    std::cout << "Digite um número entre 1 e 7: ";
    std::cin >> numero;

    // Verificação se o número está dentro do intervalo válido
    if (numero >= 1 && numero <= 7) {
        // Impressão do dia da semana correspondente
        std::cout << "O dia da semana correspondente é: " << dias[numero - 1] << std::endl;
    } else {
        std::cout << "Número inválido. Digite um número entre 1 e 7." << std::endl;
    }

    return 0;
}