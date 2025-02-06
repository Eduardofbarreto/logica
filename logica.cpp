#include<iostream>


int main(){

int num_week;

    std::cout<<"Digite um numero entre 1 e 7: "<<std::endl;
    std::cin>>num_week;

    if(num_week == 1){
        std::cout<<"Domingo"<<std::endl;
    }else if(num_week == 2){
        std::cout<<"Segunda"<<std::endl;
    }else if(num_week == 3){
        std::cout<<"Terça"<<std::endl;
    }else if(num_week == 4){
        std::cout<<"Quarta"<<std::endl;
    }else if(num_week == 5){
        std::cout<<"Quinta"<<std::endl;
    }else if(num_week == 6){
        std::cout<<"Sexta"<<std::endl;
    }else{
        std::cout<<"Sábado"<<std::endl;
    }

return 0;

}