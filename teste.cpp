#include<iostream>

using namespace std;

int x = 5; //global variable x

void myFunction(){
    cout<<x++<<"\n";
}

int main(){

    myFunction();

    cout<<x;

    return 0;
}
