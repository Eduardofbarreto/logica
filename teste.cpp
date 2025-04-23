#include <iostream>
#include<string>

int myFunction(int x, int y){
    return y + x;
}

int main(){

    std::cout<<myFunction(3, 5)<<std::endl;


    return 0;
}