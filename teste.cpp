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
    saudacao("AAA");
    cout<<"\n";
    saudacao("BBB");

    return 0;
}
