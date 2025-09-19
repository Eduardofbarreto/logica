#include<iostream>

int main(){

    int n;
    int soma = 0;

    std::cout<<"Faça uma soma de 1 até: "<<std::endl;
    std::cin>>n;

    for(int i = 1; i <= n; i++){
        soma += i;
        std::cout<<"O resultado da é: "<<soma<<std::endl;
    }

    return 0;
}