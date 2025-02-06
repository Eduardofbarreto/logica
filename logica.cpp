#include<iostream>

int main(){
    
int number;
bool resultado;

std::cout<<"Digite um numero: "<<std::endl;
std::cin>>number;

resultado = (number % 3 == 0 && number % 5 == 0);

std::cout<<resultado<<std::endl;


return 0;

}