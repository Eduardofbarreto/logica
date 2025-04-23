#include <iostream>
#include<string>

void myFunction(std::string name, int age){
    std::cout<<"Your name is "<<name<<" and your age is "<<age<<"."<<std::endl;
}


int main(){

    myFunction("Eduardo", 37);
    myFunction("Fernanda", 40);


    return 0;
}