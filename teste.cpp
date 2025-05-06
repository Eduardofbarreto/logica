#include <iostream>
#include <string>

class Numbers{
    public:
    int a;
    int b;

    Numbers(int num1, int num2) : a(num1), b(num2){}

    void Calcular(){
        int resultado = a * b;
        std::cout<<"O resultado é: "<<resultado<<std::endl;
    }

};

int main(){

    int aNum1 = 4;
    int aNum2 = 2;

    Numbers meuObj(aNum1, aNum2);
    meuObj.Calcular();


    return 0;
}
    