#include<iostream>
#include<string>

int main(){

    struct{
        int num1;
        int num2;
        std::string text1;
        std::string text2;
    } myStructure;

    std::cout<<"Digite um valor para num 1: "<<std::endl;
    std::cin>>myStructure.num1;

    std::cout<<"Digite um valor para num 2: "<<std::endl;
    std::cin>>myStructure.num2;

    std::cout<<"Digite uma palavra para texto 1: "<<std::endl;
    std::cin>>myStructure.text1;

    std::cout<<"Digite um palavra para texto 2: "<<std::endl;
    std::cin>>myStructure.text2;

    std::cout<<myStructure.num1<<std::endl;
    std::cout<<myStructure.num2<<std::endl;
    std::cout<<myStructure.text1<<std::endl;
    std::cout<<myStructure.text2<<std::endl;

    return 0;
}