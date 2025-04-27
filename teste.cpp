#include <iostream>

using namespace std;

int multi(int a, int b){
    return a * b;
}

int main(){

    int a, b, resultado;

    cout<<"Digite um valor para a: ";
    cin>>a;
    cout<<"Digite um valor para b: ";
    cin>>b;

    resultado = multi(a, b);

    cout<<resultado;

    return 0;
}