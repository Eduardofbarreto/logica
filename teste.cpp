#include <iostream>
#include<string>

int main(){

    
    int myNumbers[5] = {10, 20, 30, 40, 50};

    for(int i : myNumbers){
        std::cout<<i<<std::endl;
    }
    
 

    return 0;
}