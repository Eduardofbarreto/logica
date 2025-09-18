//(C×9/5)+32=F
//(F−32)×5/9=C

#include<iostream>

int main(){

    float c, f;
    float temp_c, temp_f;

    std::cout<<"Digite a temperatura em Fahrenheit: "<<std::endl;
    std::cin>>f;

    temp_c = (f - 32)*5/9;

    std::cout<<"A temperatura em Celsius é de: "<<temp_c<<std::endl;


    return 0;
}