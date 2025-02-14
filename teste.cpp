#include<iostream>
#include<string>

class multiplos{
    public:
    int num1;
    multiplos(int num1){
        this -> num1 = num1;
    }
    void calcular(){
        if(num1 % 3 == 0 && num1 % 5 == 0){
            std::cout<<"O numero "<<this->num1<<" e multiplo de 3 e 5."<<std::endl;
        }else{
            std::cout<<"O numero nao e multiplo de 3 e 5."<<std::endl;
        }
    }
};

int main(){
    int num1;

    std::cout<<"Digite um numero :"<<std::endl;
    std::cin>>num1;

    multiplos resultado(num1);
    resultado.calcular();

    return 0;
}