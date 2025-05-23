#include "Aluno.h"
#include "Pessoa.h"

void Aluno::coletar(){
    std::cout<<std::endl;
    Pessoa::coletar();
    std::cout<<"Qual cpf: "<<std::endl;
    std::cin>>cpf;
    std::cout<<"Qual curso: "<<std::endl;
    std::cin>>curso;
    std::cout<<std::endl;
}

void Aluno::exibir(){
    std::cout<<std::endl;
    Pessoa::exibir();
    std::cout<<"Cpf: "<<cpf<<std::endl;
    std::cout<<"Curso: "<<curso<<std::endl;
    std::cout<<std::endl;
}

