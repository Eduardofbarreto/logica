#include <iostream>
#include <string>

int main(){

    std::string nome = "Edu";
    std::string &eu = nome;

    std::cout<<eu<<std::endl;


    return 0;
}