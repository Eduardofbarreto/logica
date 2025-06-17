#include <iostream>
#include<string>

int main(){

    int number;
    int num_tab [10] = {1,2,3,4,5,6,7,8,9,10};
    int resultado;

    std::cout<<"Digite um valor para number: "<<std::endl;
    std::cin>>number;

    for(int num : num_tab){
        resultado = (number * num);
        std::cout<<"O valor de "<<number<<" x "<<num<<" = "<<resultado<<std::endl;
    }

    return 0;
}