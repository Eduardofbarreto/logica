#include <iostream>
#include<string>

int main(){

    std::string nomes [5] = {"Eduardo", "Tânia", "Fernanda", "Mariana", "Murilo"};
    std::string n;

    for(std::string n : nomes){
        std::cout<<n<<std::endl;
    }



    return 0;
}