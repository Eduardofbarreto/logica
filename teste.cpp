#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){

    srand(time(0));

    int num_escolhido, num_aleat;

    num_aleat = (rand() % 10) + 1;

    while(num_escolhido != num_aleat){
        
        std::cout<<"Digite seu número escolhido: "<<std::endl;
        std::cin>>num_escolhido;
        if(num_escolhido == num_aleat){
            std::cout<<"Parabéns!! Você acertou!!"<<std::endl;
        }else{
            std::cout<<"Quase!!"<<std::endl;
        }
    }

    return 0;
}