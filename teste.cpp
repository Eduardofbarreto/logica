#include<iostream>
#include<string>

int main(){

    std::string frutas[5] = {"Maçã", "Banana", "Uva", "Mamão", "Pera"};

    for(int i = 0; i < 5; i++){
        std::cout<<frutas[i]<<std::endl;
    }
    

    return 0;
}