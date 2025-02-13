#include <iostream>
#include <string>
/*
class calculadora{
    public:
    int a, b;
    int op;
    float resultado;

    void resolver(){
        switch(op){
            case 1:
                resultado = a + b;
                std::cout<<a<<" + "<<b<<" = "<<resultado<<std::endl;
                break;
            case 2:
                resultado = a - b;
                std::cout<<a<<" - "<<b<<" = "<<resultado<<std::endl;
                break;
            case 3: 
                resultado = a * b;
                std::cout<<a<<" * "<<b<<" = "<<resultado<<std::endl;
                break;
            case 4:
                if(b == 0){
                    std::cout<<"Erro: Divisao por zero!"<<std::endl;
                    return;
                }
                resultado = static_cast<float>(a)/b;
                std::cout<<a<<" / "<<b<<" = "<<resultado<<std::endl;
                break;
            default:
                std::cout<<"Operacao invalida!"<<std::endl;
                return;
        }
    }
};
*/

class calculadora{
    public:
    int a, b;
    char op;
    float resultado;

    void calcular(){
        switch(op){
            case '+':
                resultado = a + b;
                break;
            case '-':
                resultado = a - b;
                break;
            case '*':
                resultado = a * b;
                break;
            case '/':
                if(b == 0){
                    std::cout<<"Erro: Divisao por zero!"<<std::endl;
                    std::cout<<"\n"<<std::endl;
                }else{
                    resultado = static_cast<float>(a) / b;
                }
                break;
            default:
                std::cout<<"Voce inseriu um valor inexistente!"<<std::endl;
                return;
        }

        std::cout<<"\n"<<std::endl;
        std::cout<<"O resultado de "<<a<<" "<<op<<" "<<b<<" = "<<resultado<<std::endl;
        std::cout<<"\n"<<std::endl;
    }
};


int main() {

    calculadora calc;

    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>calc.a;

    std::cout<<"Digite um valor para operacao: 1(soma), 2(subtracao), 3(multiplicacao) e 4(divisao) "<<std::endl;
    std::cin>>calc.op;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>calc.b;


    calc.calcular();


    return 0;
}