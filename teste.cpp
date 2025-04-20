#include <iostream>

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
  };


int main(){

    enum Level myVar = MEDIUM;

    std::cout<<myVar<<std::endl;

    return 0;
}