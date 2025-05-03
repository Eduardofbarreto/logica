#include <iostream>

class Empregar{
    private:
    int salario;

    public:
    //setter
    void mostrarSalario(int s){
        salario = s;
    }
    //Getter
    int mostrarSalario(){
        return salario;
    }
};

int main(){

    Empregar meuObj;
    meuObj.mostrarSalario(4500);
    std::cout<<meuObj.mostrarSalario();

    return 0;
}