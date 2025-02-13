#include <iostream>
#include <string>

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



int main() {

    calculadora calc;

    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>calc.a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>calc.b;

    std::cout<<"Digite um valor para operacao: 1(soma), 2(subtracao), 3(multiplicacao) e 4(divisao) "<<std::endl;
    std::cin>>calc.op;

    calc.resolver();


    return 0;
}