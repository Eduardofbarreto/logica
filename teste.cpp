#include<iostream>

class Conta{
    private:
    int saldo;

    public:
    void setSaldo(int s){
        saldo = s;
    }

    int getSaldo(){
        return saldo;
    }
};

int main(){

    Conta meuObj;
    meuObj.setSaldo(4000);
    std::cout<<meuObj.getSaldo()<<std::endl;

    return 0;
}