#include <iostream>
#include <string>

class apresentacao{
    public:
    std::string nome;

    void mynameis(){
        std::cout<<"Muito bem-vindo "<<nome<<" ao nosso espaço!";
    }
};

int main(){

    apresentacao terminal;

    std::cout<<"Qual seu nome: "<<std::endl;
    std::cin>>terminal.nome;

    terminal.mynameis();

    return 0;
}