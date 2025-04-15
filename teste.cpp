#include<iostream>
#include<string>

int main(){

    std::string cars[3] = {"Gol", "Fusca", "Fox"};

    for(std::string car : cars){
        std::cout<<"O "<<car<<" e um excelente carro!!"<<std::endl;
    }


    return 0;
}