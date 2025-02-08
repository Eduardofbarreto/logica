#include <iostream>

int main() {
    int idade;

    do {
        std::cout << "Digite sua idade: " << std::endl;
        std::cin >> idade;
        if (idade >= 18) {
            std::cout << "Obrigado pelo seu registro!" << std::endl; // Adicionado endl e corrigido "resistro" para "registro"
        } else {
            std::cout << "Você precisa ter 18 anos ou mais para se registrar." << std::endl; // Mensagem para menores de idade
        }
    } while (idade < 18);

    return 0;
}