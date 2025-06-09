#include<iostream>
#include<string>

class Somar{
    public:
    int a = 4;
    int b = 3;
    int soma;

    Somar(){}

    void calc(){
        soma = a + b;
        std::cout<<"O resultado é: "<<soma<<std::endl;
    }
};

int main(){

    Somar s;
    s.calc();

    return 0;
}