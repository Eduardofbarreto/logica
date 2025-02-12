#include <iostream>
#include<string>

class agenda{
    public:
    std::string nome;
    std::string telefone;

    void mensagem(){
        std::cout<<"Contato cadastrado com sucesso!"<<std::endl;
    }
};

int main(){

agenda cadastra;

std::cout<<"Digite o nome: "<<std::endl;
std::cin>>cadastra.nome;

std::cout<<"Digite o telefone: "<<std::endl;
std::cin>>cadastra.telefone;

cadastra.mensagem();

  return 0;
}