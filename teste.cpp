#include <iostream>


int main(){

   int idade = 23;

   std::string resultado = (idade >= 18) ? "Pode votar" : "Nao pode votar";
   std::cout<<resultado;

    return 0;
}