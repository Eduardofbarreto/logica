#include<iostream>
#include<string>

int main(){
    int num;

    std::cout<<"Digite um numero :";
    std::cin>>num;

    if(num >=0){
        std::cout<<"Num positivo!";
    }else{
        std::cout<<"Num negativo!!";
    }

    return 0;
}