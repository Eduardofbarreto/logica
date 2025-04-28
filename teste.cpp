#include<iostream>

using namespace std;

void saudacao(string nome){
    cout<<"Bem-vindo "<<nome;
}

int main(){

    string nome;

    cout<<"Digite um nome: ";
    cin>>nome;

    saudacao(nome);
    cout<<"\n";

    return 0;
}
