#include <iostream>
#include<string>
#include<vector>

int main(){

    std::vector<std::string>cars = {"Volvo", "Ferrari", "Audi"};

    cars.push_back("Bugatti");

    for(std::string car : cars){
        std::cout<<car<<std::endl;
    }
    
 

    return 0;
}