#include <iostream>
#include<string>

int main(){

    int tabNum;
    int myNumbers[10] = {1,2,3,4,5,6,7,8,9,10};

    std::cout<<"Digite um numero ao qual queira fazer a tabuada: "<<std::endl;
    std::cin>>tabNum;

    for(int i : myNumbers){
        std::cout<<tabNum<<" * "<<i<<" = "<<tabNum*i<<std::endl;
    }
    
 

    return 0;
}