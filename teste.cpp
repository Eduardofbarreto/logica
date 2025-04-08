#include <iostream>
#include<string>

int main(){

    std::string cars[5] = {"Volvo", "Bmw", "Ford", "Mazda", "Tesla"};

    for(int i = 0; i < 5; i++){
        std::cout<<i<<" = "<<cars[i]<<std::endl;
    }
 

    return 0;
}