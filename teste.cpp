#include<iostream>

using namespace std;

int soma(int a, int b){
    return a + b;
}

int main(){

    int a, b, resultado;

    cout<<"Digite um valor para a: ";
    cin>>a;

    cout<<"Digite um valor para b: ";
    cin>>b;

    resultado = soma(a,b);

    cout<<"O resultado de: "<<a<<" + "<<b<<" = "<<resultado;

    return 0;
}
