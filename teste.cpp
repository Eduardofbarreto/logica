#include<iostream>
#include<string>
#include<vector>
#include<limits>

int main(){

    int num_sec = 8;
    int tentativas;
    int num;

    do{
        std::cout<<"Tente a sorte: "<<std::endl;
        std::cout<<"Digite um número entre 1 a 100: "<<std::endl;
        std::cin>>num;
    }while(num != num_sec);
        if(num == num_sec){
            std::cout<<"Parabéns! Você acertou!"<<num_sec<<"!"<<std::endl;
        }else{
            std::cout<<"Continue tentando!"<<std::endl;
            std::cout<<"Digite um número de 1 a 100: "<<std::endl;
        }

    return 0;
}