#include<iostream>

int main(){

int arr[3];
int indice;

std::cout<<"Digite 3 numeros inteiros: "<<std::endl;
std::cin>>arr[0]>>arr[1]>>arr[2];

std::cout<<"Digite um valor para selecionar o array: "<<std::endl;
std::cin>>indice;

std::cout<<"Voce escolheu: "<<arr[indice]<<std::endl;


return 0;

}