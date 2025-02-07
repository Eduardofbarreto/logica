#include<iostream>


int main(){

std::string letra;

std::cout<<"Digite uma letra: "<<std::endl;
std::cin>>letra;

if(letra == "a" || letra == "e" || letra == "i" || 
letra == "o" || letra == "u" || letra == "A" || letra == "E" 
|| letra == "I" || letra == "O" || letra == "U"){
    std::cout<<"E uma vogal!"<<std::endl;
}else{
    std::cout<<"Nao e uma vogal!"<<std::endl;
}

return 0;

}