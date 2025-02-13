#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30};
    std::vector<std::string> palavras = {"casa", "comida", "roupa"};

    /*
    numeros.push_back(40);

    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl; // Imprime: 10 20 30 40 50
    */

    std::cout<<numeros.size();
    std::cout<<palavras.size();

    return 0;
}