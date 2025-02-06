#include<iostream>

int main(){
    
int number;
bool resposta;

std::cout<<"Digite um numero: "<<std::endl;
std::cin>>number;

resposta = (number >= 0 && number % 2 == 0);

std::cout<<resposta<<std::endl;


return 0;

}