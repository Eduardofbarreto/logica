#include <iostream>
#include<string>

    class calculadora{
        public:
        int a, b;
        int soma, subt, mult, div;
    

    void calcular(){
        soma = a + b;
        subt = a - b;
        mult = a * b;
        if(b != 0){
            div = a / b;
        }else{
            std::cout<<"Erro, divisao por 0!"<<std::endl;
        }
    }
};

int main(){
    calculadora calc;

    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>calc.a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>calc.b;

    calc.calcular();

    std::cout<<"O resultado da soma e: "<<calc.soma<<std::endl;
    std::cout<<"O resultado da subtracao e: "<<calc.subt<<std::endl;
    std::cout<<"O resultado da multiplicaçao e: "<<calc.mult<<std::endl;
    std::cout<<"O resultado da divisao e: "<<calc.div<<std::endl;


    return 0;

}