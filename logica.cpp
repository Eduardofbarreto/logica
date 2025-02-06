#include<iostream>

int main(){
    
int a, b, c;
bool resposta;

std::cout<<"Digite o valor do primeiro lado: "<<std::endl;
std::cin>>a;

std::cout<<"Digite o valor do segundo lado: "<<std::endl;
std::cin>>b;

std::cout<<"Digite o valor para o terceiro lado: "<<std::endl;
std::cin>>c;

resposta = (a + b > c && a + c > b && b + c > a);

std::cout<<resposta<<std::endl;


return 0;

}