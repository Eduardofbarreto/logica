#include<iostream>
#include<string>

int main(){
    int num;

    std::cout<<"Digite algum numero: "<<std::endl;
    std::cin>>num;

    if(num % 2 == 0){
        std::cout<<"Par"<<std::endl;
    }else{
        std::cout<<"Impar"<<std::endl;
    }
}