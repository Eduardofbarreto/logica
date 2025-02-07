#include<iostream>


int main(){

int numbers [] = {10,20,30,40,50,60,70,80,90,100};
int tamanho = sizeof(numbers)/sizeof(numbers[0]);

    for(int i = 0; i < tamanho; i++){
        if(numbers[i] % 2 == 0){
            std::cout<<"A lista de numeros par e: "<<numbers[i]<<std::endl;
        }
    }



return 0;

}