#include<iostream>



int main(){

  int idade[5] = {25, 31, 33, 37, 42};

  float idadeMedia, soma = 0;

  int comprimento = sizeof(idade) / sizeof(idade[0]);

  for(int age : idade){
    soma += age;
  }

  idadeMedia = soma / comprimento;

  std::cout<<"A idade media e: "<<idadeMedia<<std::endl;


    return 0;
}