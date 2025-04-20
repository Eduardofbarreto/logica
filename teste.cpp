#include <iostream>

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main() {
    Level currentLevel;
    Level alertLevel = HIGH;

    currentLevel = LOW;
    std::cout << "Nível atual: " << currentLevel << std::endl; // Saída: Nível atual: 0
    std::cout << "Nível de alerta: " << alertLevel << std::endl; // Saída: Nível de alerta: 2

    currentLevel = MEDIUM;
    if (currentLevel == MEDIUM) {
        std::cout << "O nível atual é médio." << std::endl;
    }

    return 0;
}