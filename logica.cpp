#include <iostream>
#include <string>

class texto{
    public:
    std::string palavra;
};

int main(){

texto meuTexto;

std::cout<<"Digite uma palavra: "<<std::endl;
std::cin>>meuTexto.palavra;

std::cout<<"A sua palavra e: "<<meuTexto.palavra<<std::endl;

return 0;

}