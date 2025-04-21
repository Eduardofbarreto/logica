#include <iostream>
#include <string>

int main(){

    int num1, num2, soma;
    int calc1 = num1; 
    int calc2 = num2;
    
        std::cout<<"Digite um valor para num1: "<<std::endl;
        std::cin>>calc1; 
    
        std::cout<<"Digite um valor para num2: "<<std::endl;
        std::cin>>calc2;    

        soma = calc1 + calc2;

        std::cout<<"O resultado e: "<<soma<<std::endl;

    return 0;
}