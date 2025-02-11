#include <iostream>
#include <string>

class name{
    public:
    std::string name;
};

class lastname{
    public:
    std::string lastname;
};

int main(){

    name myName;
    lastname myLastname;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>myName.name;

    std::cout<<"Digite seu sobrenome: "<<std::endl;
    std::cin>>myLastname.lastname;

    std::cout<<"Seu nome e: "<<myName.name<<" "<<myLastname.lastname<<std::endl;

    

return 0;

}