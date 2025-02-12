#include<iostream>
#include<string>

class cliente{
    public:
    std::string nome;
    std::string telefone;
    std::string endereco;

    void cadastroCliente(){
        std::cout<<"Cadastro salvo com êxito!";
    }
};

class produto{
    public:
    std::string nome;
    int quantidade;
    float valor;

    void cadastroProduto(){
        std::cout<<"Produto cadastrado com sucesso!"<<std::endl;
    }
};



int main(){

int opcao;

cliente inserir;
produto insert;

std::cout<<"Digite 1 para Cliente ou 2 para produtos: "<<std::endl;
std::cin>>opcao;

if(opcao == 1){
    std::cout<<"Digite o nome do cliente: "<<std::endl;
    std::cin>>inserir.nome;

    std::cout<<"Digite o telefone: "<<std::endl;
    std::cin>>inserir.telefone;

    std::cout<<"Digite o endereco: "<<std::endl;
    std::cin>>inserir.endereco;

        inserir.cadastroCliente();
}else{
    std::cout<<"Digite o nome do produto: "<<std::endl;
    std::cin>>insert.nome;

    std::cout<<"Digite a quantidade: "<<std::endl;
    std::cin>>insert.quantidade;

    std::cout<<"Digite o valor: "<<std::endl;
    std::cin>>insert.valor;

        insert.cadastroProduto();
}



    return 0;
}