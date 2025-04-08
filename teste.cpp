#include <iostream>
#include <string>

int main(){

    using namespace std;

    string minhaString = "Hello";
    cout<<minhaString; //saída será um hello normal
    cout<<"\n";

    cout<<minhaString.at(0); //vai sair o primeiro caractere
    cout<<"\n";
    cout<<minhaString.at(1); //vai sair o segundo caractere
    cout<<"\n";
    cout<<minhaString.at(minhaString.length() - 1); //último caractere
    cout<<"\n";

    minhaString.at(0) = 'J';
    cout<<minhaString; //vai trocar o H pelo J

    return 0;
}