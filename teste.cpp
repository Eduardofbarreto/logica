//(C×9/5)+32=F
//(F−32)×5/9=C

#include<iostream>

int main(){

    float c;
    float temp_f;

    std::cout<<"Digite a temperatura em Celsius: "<<std::endl;
    std::cin>>c;

    temp_f = (c * 9/5)+32;

    std::cout<<"A temperatura em Fahreihet é de: "<<temp_f<<std::endl;



    return 0;
}