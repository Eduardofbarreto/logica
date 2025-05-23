#include<iostream>

class Conta{
    private:
    double saldo = 1480.90;

    public:
    Conta(){}

    double setsaldo(double s){
        saldo = s;
    }

    double getsaldo(){
        return saldo;
    }

    void exibir(){
        std::cout<<getsaldo()<<std::endl;
    }
};

int main(){

    double soma;

    Conta c;
    soma = (c.getsaldo() + 500);
    std::cout<<soma<<std::endl;

    return 0;
}