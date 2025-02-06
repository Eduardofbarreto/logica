#include<iostream>


int main(){

std::string palavra;

std::cout<<"Digite uma palavra: "<<std::endl;
std::cin>>palavra;

std::cout<<palavra.insert(2,palavra)<<std::endl;

return 0;

}