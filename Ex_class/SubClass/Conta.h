#ifndef CONTA_H
#define CONTA_H

class Conta{
    private:
    double saldo = 1500;

    public:

    void setsaldo(double s){
        saldo = s;
    }

    double getsaldo(){
        return saldo;
    }

    double deposito;
    double saque;
    double valorFinal;

    void depositar();
    void sacar();
    void consultar();
};

#endif 