#include<iostream>
#include<string>

struct car{
    int year;
    std::string name;
};

int main(){

    car myCar1;
    myCar1.name = "Bmw";
    myCar1.year = 2023;

    car myCar2;
    std::cout<<"Digite o nome do carro: "<<std::endl;
    std::cin>>myCar2.name;

    std::cout<<"Digite o ano do carro: "<<std::endl;
    std::cin>>myCar2.year;

    std::cout<<"O nome dos carros sao: "<<myCar1.name<<" e "<<myCar2.name<<"."<<std::endl;
    std::cout<<"Os anos dos carros sao: "<<myCar1.year<<" e "<<myCar2.year<<"."<<std::endl;




    return 0;
}