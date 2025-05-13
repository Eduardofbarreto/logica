#include<iostream>
#include<string>

class Dados{
    public:
        double base, altura, area;
        const double pi = 3.14159;
        double raio;

    Dados(){}

    virtual void coletarDadosTriangulo(){
        std::cout<<"Digite a base: "<<std::endl;
        std::cin>>base;
        std::cout<<"Digite a altura: "<<std::endl;
        std::cin>>altura;
    }

    virtual void coletarDadosCirculo(){
        std::cout<<"Digite o raio do círculo: "<<std::endl;
        std::cin>>raio;
    }

    virtual void calcular(){
        std::cout<<"O resultado é: "<<area<<std::endl;
        std::cout<<std::endl;
    }
};

class Triangulo : public Dados{
    public:

    Triangulo(){}

    void calcular() override{
        area = (base * altura)/2;
        Dados::calcular();
    }

};

class Circulo : public Dados{
    public:

    Circulo(){}

    void calcular() override{
        area = pi * raio * raio;
        std::cout<<"A área do círculo é de: "<<area<<std::endl;
    }
};

int main(){

    Circulo meuCirculo;
    meuCirculo.coletarDadosCirculo();
    meuCirculo.calcular();
    

    return 0;
}