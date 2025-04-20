#include <iostream>
#include <string>

class Somar{
    public:
    int num1, num2, soma;

    Somar(){}

    virtual void Calcular(){
        soma = num1 + num2;
        std::cout<<soma<<std::endl;
    }
};

class Subtrair : public Somar{
    public:
    int num1, num2, subt;

    Subtrair(){}

    void Calcular() override{
        subt = num1 - num2;
        std::cout<<subt<<std::endl;
    }
};


int main(){

    Somar minhaSoma;
    Subtrair minhaSubt;

    minhaSoma.num1 = 8;
    minhaSoma.num2 = 3;
    minhaSubt.num1 = 8;
    minhaSubt.num2 = 3;

    minhaSoma.Calcular();
    minhaSubt.Calcular();



    return 0;
}