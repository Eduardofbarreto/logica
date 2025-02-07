#include<iostream>


int main(){

int numbers [] = {1,2,3,4,5,6,7,8,9,10};
int tamanho = sizeof(numbers)/sizeof(numbers[0]);

std::cout<<"Numeros pares na lista: "<<std::endl;
    for(int i = 0; i < tamanho; i++){
        if(numbers[i] % 2 == 0){
            std::cout<<numbers[i]<<" "<<std::endl;
        }
    }


return 0;

}