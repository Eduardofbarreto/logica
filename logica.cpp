#include<iostream>

int main(){
    
int year;
bool resposta;

std::cout<<"Digite um ano: "<<std::endl;
std::cin>>year;

resposta = (year % 4 == 0 or year % 100 == 0 && year % 400 == 0);

std::cout<<resposta<<std::endl;



return 0;

}