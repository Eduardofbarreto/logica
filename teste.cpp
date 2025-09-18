#include<iostream>

using namespace std;
int main(){

    int nota1, nota2, nota3;
    float media;

    cout<<"Digite a primeira nota: ";
    cin>>nota1;

    cout<<"\nDigite a segunda nota: ";
    cin>>nota2;

    cout<<"\nDigite a terceira nota: ";
    cin>>nota3;

    media = (nota1 + nota2 + nota3)/3;

    if(media>=7){
        cout<<"\nAprovado!";
    }else{
        cout<<"\nReprovado!";
    }

    cout<<"\n\n";
    return 0;
}