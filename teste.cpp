#include<iostream>

int main(){

    int min, max;

    std::cout<<"Digite o número mínimo: "<<std::endl;
    std::cin>>min;

    std::cout<<"Digite o número máximo: "<<std::endl;
    std::cin>>max;

    for(int i = min; i <= max; i++){
        if(i % 2 == 0){
            std::cout<<"O valor é par!"<<i<<std::endl;
        }
    }

    return 0;
}