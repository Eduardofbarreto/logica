#include <iostream>
#include<string>

void myFunction(std::string country = "Usa"){
    std::cout<<country<<std::endl;
}

int main(){

    myFunction();
    myFunction("Brasil");
    myFunction("Franca");
    myFunction();
    

    return 0;
}