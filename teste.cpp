#include<iostream>



int main(){

    using namespace std;
    
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
      cout << myNumbers[i] << "\n";
    }


    return 0;
}