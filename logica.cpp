#include<iostream>
#include<string>

class agenda{
    public:
    std::string nome;
    std::string telefone;

    void mensagem(){
        std::cout<<"Contato salvo com êxito!";
    }
};

int main(){

    agenda processar;

    std::cout<<"Digite o nome: "<<std::endl;
    std::cin>>processar.nome;

    std::cout<<"Digite o telefone: "<<std::endl;
    std::cin>>processar.telefone;

    processar.mensagem();


    return 0;
}