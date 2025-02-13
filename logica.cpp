#include <iostream>
#include <string>

class array{
    public:
    int numeros[5] = {1,2,3,4,5};
    int numEscolhido;

    void mensagem(){
        std::cout<<"O número escolhido foi: "<<numeros[numEscolhido-1]<<std::endl;
        std::cout<<"\n"<<std::endl;
    }
};


int main() {

    array aqui;

    std::cout<<"Digite um numero: "<<std::endl;
    std::cin>>aqui.numEscolhido;

    switch (aqui.numEscolhido)
    {
    case 1:
        aqui.mensagem();
        break;
    case 2:
        aqui.mensagem();
        break;
    case 3:
        aqui.mensagem();
        break;
    case 4:
        aqui.mensagem();
        break;
    case 5:
        aqui.mensagem();
        break;
    default:
        break;
    }

    return 0;
}