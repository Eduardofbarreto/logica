#include <iostream>
#include <string>
#include<iomanip>
#include<locale>

class Gasolina{
    private:
        double valor = 6.999;

    public:
        void setValor(double v){
            valor = v;
        }
    
    double getValor(){
        return valor;
    }
};

int main(){

    double aumento;

    std::cout<<"De quanto será o aumento da gasolina: "<<std::endl;
    std::cin>>aumento;

    Gasolina meuObj;
    double valorAtual = meuObj.getValor();
    meuObj.setValor(valorAtual + aumento);

    std::cout<<std::fixed<<std::setprecision(3);
    std::cout<<"O novo valor da gasolina é de: R$"<<meuObj.getValor()<<std::endl;



    return 0;
}