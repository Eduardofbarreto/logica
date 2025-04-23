#include <iostream>
#include<string>

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){

    int firstNum = 10;
    int secondNum = 20;

    std::cout<<"Before swap: "<<std::endl;
    std::cout<<firstNum<<secondNum<<std::endl;

    swapNums(firstNum, secondNum);

    std::cout<<"After swap: "<<std::endl;
    std::cout<<firstNum<<secondNum<<std::endl;



    return 0;
}