#include<iostream>
#include<string>
#include<iomanip>
#include<locale>

class PessoaFisica{
    public:
        std::string nome;
        std::string cpf;
        std::string nasc;

    PessoaFisica(){}

    virtual void coletarInfo(){
        std::cout<<"Qual nome: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Qual cpf: "<<std::endl;
        std::cin>>cpf;
        std::cout<<"Qual data de nascimento: "<<std::endl;
        std::cin>>nasc;
    }

    virtual void exibirInfo(){
        std::cout<<"O nome é: "<<nome<<"."<<std::endl;
        std::cout<<"O cpf é: "<<cpf<<"."<<std::endl;
        std::cout<<"A data de nascimento é: "<<nasc<<"."<<std::endl;
    }
};

class Empregrado : public PessoaFisica{
    public:
        std::string cargo;
        double salario;
        int matricula;

    void coletarInfo() override{
        PessoaFisica::coletarInfo();
        std::cout<<"Qual o cargo: "<<std::endl;
        std::cin>>cargo;
        std::cout<<"Qual o salário: "<<std::endl;
        std::cin>>salario;
        std::cout<<"Qual a matrícula: "<<std::endl;
        std::cin>>matricula;
    }

    void exibirInfo() override{
        PessoaFisica::exibirInfo();
        std::cout<<"O cargo é: "<<cargo<<"."<<std::endl;
        std::cout<<"O salário é de: R$ "<<std::fixed<<std::setprecision(2)<<salario<<"."<<std::endl;
        std::cout.imbue(std::locale("pt.BR-UTF8"));
        std::cout.imbue(std::locale("C"));
        std::cout<<"A matrícula é: "<<matricula<<std::endl;
    }
    
};

int main(){

    Empregrado meuObj;
    meuObj.coletarInfo();
    meuObj.exibirInfo();

    return 0;
}