#include<iostream>
#include<string>

int main(){
std::string frase;

std::cout<<"Digite uma frase: ";
std::getline(std::cin, frase);

size_t posicao = frase.find('a');

    while(posicao != std::string::npos){
        frase.erase(posicao, 1);
        frase.insert(posicao, "e");
        posicao = frase.find('a', posicao + 1);
    }

std::cout<<"A frase modificada e: "<<frase<<std::endl;

return 0;

}