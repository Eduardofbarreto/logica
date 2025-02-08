#include<iostream>

int main(){

int num;
std::string dias[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira",
"Quinta-feira", "Sexta-feira", "Sábado"};

std::cout<<"Digite um numero para ver qual dia corresponde: "<<std::endl;
std::cin>>num;

    if(num <=0 && num >7){
        std::cout<<"Numero invalido!"<<std::endl;
    }else{
        std::cout<<dias[num-1]<<std::endl;
    }


return 0;

}