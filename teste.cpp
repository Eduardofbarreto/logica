#include<iostream>
#include<vector>

int somaElementos(const std::vector<int> & numeros){
    int soma = 0;
    for(int num : numeros){
        soma += num;
    }
    return soma;
}

int main(){

    int num1, num2, num3;

    std::cout<<"Digite um valor para num 1: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Digite um valor para num 2: "<<std::endl;
    std::cin>>num2;
    std::cout<<"Digite um valor para num 3: "<<std::endl;
    std::cin>>num3;

    std::vector<int>lista = {num1, num2, num3};
    std::cout<<"A soma dos elementos é: "<<somaElementos(lista)<<std::endl;
    return 0;
}