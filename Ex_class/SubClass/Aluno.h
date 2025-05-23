#ifndef ALUNO_H
#define ALUNO_H
#include "Pessoa.h"
#include<string>

class Aluno : public Pessoa{
    private:
        std::string cpf;
        std::string curso;

    public:
        std::string getcpf(){
            return cpf;
        }

        std::string getcurso(){
            return curso;
        }

        void setcpf(std::string cp){
            cpf = cp;
        }

        void setcurso(std::string c){
            curso = c;
        }

        void coletar();
        void exibir();

};

#endif