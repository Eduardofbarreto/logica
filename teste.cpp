#include<iostream>
#include<string>

int main(){

    int n;
    int soma = 0;

    std::cout<<"Digite o número final da soma: "<<std::endl;
    std::cin>>n;

    for(int i = 1; i <= n; i++){
        soma += i;
    }

    std::cout<<soma<<std::endl;

    return 0;
}