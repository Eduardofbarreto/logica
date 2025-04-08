#include <iostream>
#include<string>

int main(){

    std::string cars[5];
    cars[0] = "Volvo";
    cars[1] = "Bmw";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";

    for(std::string car : cars){
        std::cout<<car<<std::endl;
    }
    
 

    return 0;
}