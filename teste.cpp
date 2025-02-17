#include<iostream>
#include<string>

using namespace std;

class lados{
    public:
    int lado1, lado2, lado3;
    lados(int lado1, int lado2, int lado3){
        this -> lado1 = lado1;
        this -> lado2 = lado2;
        this -> lado3 = lado3;
    }
        void mensagem(){
        if(lado1 == lado2 && lado1 == lado3){
            std::cout<<"Triangulo equilatero!"<<std::endl;
        }else if(lado1 != lado2 && lado2 != lado3){
            std::cout<<"Triangulo Escaleno!"<<std::endl;
        }else{
            std::cout<<"Triangulo Isosceles!"<<std::endl;
        }
    }
};

int main(){

    int lado1, lado2, lado3;

cout<<"Digite o lado1: "<<std::endl;
cin>>lado1;

    std::cout<<"Digite o lado2: "<<std::endl;
    std::cin>>lado2;

    std::cout<<"Digite o lado3: "<<std::endl;
    std::cin>>lado3;

    lados resultado(lado1, lado2, lado3);
    resultado.mensagem();

    return 0;
}