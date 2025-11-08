#include<iostream>
#include<iomanip>

int main(){

    float area;
    float n = 3.14159;
    float raio;

    std::cout<<"Digite um valor para raio: "<<std::endl;
    std::cin>>raio;

    area = n * (raio * raio);

    std::cout<<"O valor da área é de: "<<std::fixed<<
    std::setprecision(2)<<area<<std::endl;

    return 0;
}