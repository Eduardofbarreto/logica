#include <iostream>

int main() {
    int numero;

    do {
        std::cout << "Digite um número entre 1 e 10: ";
        std::cin >> numero;

        if (numero < 1 || numero > 10) {
            std::cout << "Número inválido! Tente novamente.\n";
        }
    } while (numero < 1 || numero > 10);

    std::cout << "Número válido! Você digitou: " << numero << std::endl;

    return 0;
}
