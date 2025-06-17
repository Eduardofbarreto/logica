#include <iostream>

int main(){

    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    int num;
    int resultado;

    std::cout<<"Digite um valor para num: "<<std::endl;
    std::cin>>num;

    for(int i = 0; i <10; i++){
        resultado = num * numeros[i];
        std::cout<<"O resultado de "<<num<<" x "<<numeros[i]<<" = "<<resultado<<std::endl;
    }


    return 0;
}