#include <iostream>
#include <string>

class array{
    public:
    int numeros[5] = {1,2,3,4,5};
    int numEscolhido = numeros[2];

    void mensagem(){
        std::cout<<"O número escolhido foi: "<<numEscolhido<<std::endl;
    }
};


int main() {

    array aqui;

    aqui.mensagem();
    

    return 0;
}