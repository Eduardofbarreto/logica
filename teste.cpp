#include <iostream>
#include<string>
#include<vector>

int main(){

    int numeros[5] = {10, 20, 30, 40, 50};

    int getArrayLength = sizeof(numeros) / sizeof(numeros[0]);

    std::cout<<getArrayLength<<std::endl; // retorna o tamanho do array

    std::cout<<sizeof(numeros); //retorna o tamanho do array em bytes.
 

    return 0;
}