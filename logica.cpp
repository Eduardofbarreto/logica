#include<iostream>


int main(){

std::string palavra;

std::cout<<"Digite uma palavra: "<<std::endl;
std::cin>>palavra;

std::cout<<palavra.find(palavra)<<std::endl;

return 0;

}