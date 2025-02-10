#include <iostream>

int main() {
    int cont = 0;

    do{
        std::cout<<"Contador: "<<cont<<std::endl;
        cont++;
    }
    while(cont < 5);
    std::cout<<"Não deu"<<std::endl;

    return 0;
}