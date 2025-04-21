#include <iostream>

int Soma(int a, int b){
    return a + b;
}

int main(){

    int a = 4;
    int b = 6;
    int resultado = Soma(a, b);

    std::cout<<resultado<<std::endl;

    return 0;
}