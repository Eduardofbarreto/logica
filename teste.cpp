#include<iostream>
#include<string>

class myClass{
    public:
    int num1 = 5;
    int num2 = 2;
    void myMethod();
};

void myClass::myMethod(){
    std::cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<std::endl;
}

int main(){

    myClass Obj1;
    Obj1.myMethod();

    return 0;
}