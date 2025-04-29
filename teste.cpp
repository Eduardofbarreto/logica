#include<iostream>
#include<string>

class Car{
    public:
        std::string brand;
        std::string model;
        int year;
};

int main(){

    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    //Criando outro objeto de carro

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    std::cout<<carObj1.brand<<" "<<carObj1.model<<" "<<
    carObj1.year<<std::endl;
    
    std::cout<<carObj2.brand<<" "<<carObj2.model<<" "<<
    carObj2.year<<std::endl;

    return 0;
}
