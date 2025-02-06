#include<iostream>

int main(){
    
int num;
bool resposta;

std::cout<<"Digite um numero: "<<std::endl;
std::cin>>num;

resposta = (num %2 == 0);

std::cout<<resposta<<std::endl;


return 0;

}