#include <iostream>


int main(){

    int numeros = 12;

    int numRev = 0;

    while(numeros){
        
        numRev = numRev * 10 + numeros % 10;
        numeros /= 10;
    }

    std::cout<<"Numeros reversos: "<<numRev<<"\n";



    return 0;
}