#include<iostream>
#include<iomanip>

int main(){
    
int horas;
float segundos;
const int hora = 60;


std::cout<<"Digite o valor de horas: "<<std::endl;
std::cin>>horas;

int minutos = hora / 60;

segundos =  (60 * 60)/minutos;

std::cout<<std::fixed<<std::setprecision(2)<<segundos<<std::endl;


return 0;

}