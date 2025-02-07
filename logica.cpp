#include<iostream>


int main(){

std::string vogal[5] = {"a", "b", "c", "d","e"};
std::string letra;

std::cout<<"Digite uma letra: "<<std::endl;
std::cin>>letra;

if(letra == vogal[5]){
    std::cout<<"Essa letra e uma vogal!"<<std::endl;
}else{
    std::cout<<"Essa letra nao e uma vogal."<<std::endl;
}

return 0;

}