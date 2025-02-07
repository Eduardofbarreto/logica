#include<iostream>
#include<string>
#include<algorithm>

int main(){

std::string frase;

std::cout<<"Digite uma frase: ";
std::getline(std::cin, frase);

std::replace(frase.begin(), frase.end(), 'a', 'e');

std::cout<<"A frase modificada e: "<<frase<<std::endl;

return 0;

}