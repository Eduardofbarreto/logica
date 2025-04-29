#include<iostream>
#include<string>

class myClass{
    public:
        void myMethod(){
            std::cout<<"Hello World"<<std::endl;
        }
};

int main(){

    myClass myObj; //Create an object of myClass
    myObj.myMethod(); //Call the method

    return 0;
}