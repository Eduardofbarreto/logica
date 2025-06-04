#include<iostream>

int main(){

    int num;
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout<<"Digite um número para fazer a tabuada: "<<std::endl;
    std::cin>>num;

    for(int i = 0; i < 10; i++){
        num * tab[i];
        std::cout<<num<<" x "<<tab[i]<<" = "<<num*tab[i]<<std::endl;
    }


    return 0;
}