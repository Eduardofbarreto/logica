#ifndef CONTAEMPRESA_H
#define CONTRAEMPRESA_H
#include "Conta.h"
#include<string>

class ContaEmpresa : public Conta{
    private:
        std::string cnpj;

    public:
        std::string getcnpj(){
            return cnpj;
        }

        void setcnpj(std::string c){
            cnpj = c;
        }
    
    void depositar();
    void sacar();
    void consultar();

};

#endif