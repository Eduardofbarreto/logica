#include<iostream>
#include<iomanip>

class Conta{
    private:
        double saldo = 1750.90;
        double saque;
        double deposito;
        double total;

    public:
    
    void sacar(){
        std::cout<<"Digite o valor de saque: "<<std::endl;
        std::cin>>saque;
        total = saldo - saque;
        std::cout<<"O seu saldo atual é de: "<<std::endl;
        std::cout<<"R$ "<<std::fixed<<std::setprecision(2)<<total<<std::endl;
        std::cout<<std::endl;
    }

    void depositar(){
        std::cout<<"Digite o valor de deposito: "<<std::endl;
        std::cin>>deposito;
        total = saldo + deposito;
        std::cout<<"O seu saldo atual é de: "<<std::endl;
        std::cout<<"R$ "<<std::fixed<<std::setprecision(2)<<total<<std::endl;
        std::cout<<std::endl;
    }

    void consultar(){
        std::cout<<"O valor do seu saldo é: "<<std::endl;
        std::cout<<"R$ "<<std::fixed<<std::setprecision(2)<<saldo<<std::endl;
        std::cout<<"Obrigado por usar nossos serviços!"<<std::endl;
        std::cout<<std::endl;
    }

    void menu(){
        int opcao;
        std::cout<<"Digite a opção: "<<std::endl;
        std::cout<<"1 - Saque"<<std::endl;
        std::cout<<"2 - Deposito"<<std::endl;
        std::cout<<"3 - Consulta"<<std::endl;
        std::cin>>opcao;

        switch(opcao){
            case 1:
                Conta::sacar();
            break;
            case 2:
                Conta::depositar();
            break;
            case 3:
                Conta::consultar();
            break;
            default:
                std::cout<<"Nenhuma opção válida!"<<std::endl;
        }
    }

};

int main(){

    Conta obj;
    obj.menu();

    return 0;
}