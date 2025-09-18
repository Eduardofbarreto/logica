#include<iostream>

int main(){

    int num1, num2, num3;

    std::cout<<"Digite o primeiro número: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite o segundo número: "<<std::endl;
    std::cin>>num2;

    std::cout<<"Digite o terceiro número: "<<std::endl;
    std::cin>>num3;

    if(num1 > num2 && num1 > num3){
        std::cout<<num1<<" é o maior de todos!";
    }else if(num2 > num1 && num2 > num3){
        std::cout<<num2<<" é o maior de todos!";
    }else{
        std::cout<<num3<<" é o maior de todos!";
    }

    return 0;
}