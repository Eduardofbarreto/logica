#include<iostream>

using namespace std;
int main(){

    int dia;

    cout<<"Digite um valor para dia: ";
    cin>>dia;

    switch(dia){
        case 1:
        cout<<"\nDomingo";
        break;
        case 2:
        cout<<"\nSegunda";
        break;
        case 3:
        cout<<"\nTerça";
        break;
        case 4:
        cout<<"\nQuarta";
        break;
        case 5:
        cout<<"\nQuinta";
        break;
        cout<<"\nSexta";
        break;
        cout<<"\nSábado";
        break;
        default:
        cout<<"\nNenhum valor válido!";

    }

    return 0;
}