#include<iostream>
#include<string>

//vamos usar std:: agora

class myClass{
    public:
    int myNum;
    std::string myString;
};

int main(){
    myClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Texto";

    std::cout<<myObj.myNum<<std::endl;
    std::cout<<myObj.myString<<std::endl;

    return 0;
}
