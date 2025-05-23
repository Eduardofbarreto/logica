#include<iostream>
#include<iomanip>

class Conta{
    private:
    double saldo = 1480.90;

    public:
    double saque;
    double deposito;
    double valorFinal;

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

    void depositar(){
        std::cout<<"Qual valor de deposito: "<<std::endl;
        std::cin>>deposito;
        valorFinal = (getsaldo() + deposito);
        std::cout<<"Valor atual de: R$ "<<std::fixed<<
            std::setprecision(2)<<valorFinal<<std::endl;
    }

    void sacar(){
        std::cout<<"Qual valor de saque: "<<std::endl;
        std::cin>>saque;
        valorFinal = (getsaldo() - saque);
        std::cout<<"Valor atual de: R$ "<<std::fixed<<std::
            setprecision(2)<<valorFinal<<std::endl;
    }
};

int main(){

    int opcao;
    Conta obj;
    
    std::cout<<"===================="<<std::endl;
    std::cout<<"1 - Deposito"<<std::endl;
    std::cout<<"2 - Saque"<<std::endl;
    std::cin>>opcao;

    if(opcao == 1){
        obj.depositar();
    } else {
        obj.sacar();
    }

    return 0;
}