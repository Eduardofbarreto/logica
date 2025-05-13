#include<iostream>
#include<string>

class Dados{
    public:
        double base, altura, area;
        const double pi = 3.14159;
        double raio;
        double lado;
        double comprimento;

    Dados(){}

    virtual void coletarDadosTriangulo(){
        std::cout<<"Digite a base do triângulo: "<<std::endl;
        std::cin>>base;
        std::cout<<"Digite a altura do triângulo: "<<std::endl;
        std::cin>>altura;
    }

    virtual void coletarDadosCirculo(){
        std::cout<<"Digite o raio do círculo: "<<std::endl;
        std::cin>>raio;
    }

    virtual void coletarDadosQuadrado(){
        std::cout<<"Digite um lado do quadrado: "<<std::endl;
        std::cin>>lado;
    }

    virtual void coletarDadosRetangulo(){
        std::cout<<"Digite o comprimento do retângulo: "<<std::endl;
        std::cin>>comprimento;
        std::cout<<"Digite a altura do retângulo: "<<std::endl;
        std::cin>>altura;
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
        std::cout<<std::endl;
        area = (base * altura)/2;
        Dados::calcular();
    }

};

class Circulo : public Dados{
    public:

    Circulo(){}

    void calcular() override{
        std::cout<<std::endl;
        area = pi * raio * raio;
        std::cout<<"A área do círculo é de: "<<area<<std::endl;
        std::cout<<std::endl;
    }
};

class Quadrado : public Dados{
    public:

    Quadrado(){}

    void calcular() override{
        std::cout<<std::endl;
        area = lado * lado;
        std::cout<<"A área do quadrado é de: "<<area<<std::endl;
        std::cout<<std::endl;
    }
};

class Retangulo : public Dados{
    public:

    Retangulo(){}

    void calcular() override{
        std::cout<<std::endl;
        area = comprimento * altura;
        std::cout<<"A área do retângulo é de: "<<area<<std::endl;
        std::cout<<std::endl;
    }
};

int main(){

    int opcao;

    std::cout<<"Escolha a opção que deseja calcular: "<<std::endl;
    std::cout<<"1 - Triângulo "<<std::endl;
    std::cout<<"2 - Círculo "<<std::endl;
    std::cout<<"3 - Quadrado "<<std::endl;
    std::cout<<"4 - Retângulo "<<std::endl;

    std::cin>>opcao;

    switch(opcao){
        case 1:{
            std::cout<<"Vamos trabalhar com triângulo: "<<std::endl;
            Triangulo meuTriangulo;
            meuTriangulo.coletarDadosTriangulo();
            meuTriangulo.calcular();
            break;
        }
        case 2:{
            std::cout<<"Vamos trabalhar com círculo: "<<std::endl;
            Circulo meuCirculo;
            meuCirculo.coletarDadosCirculo();
            meuCirculo.calcular();
            break;
        }   
        case 3:{
            std::cout<<"Vamos trabalhar com quadrado: "<<std::endl;
            Quadrado meuQuadrado;
            meuQuadrado.coletarDadosQuadrado();
            meuQuadrado.calcular();
            break;
        }    
        case 4:{
            std::cout<<"Vamos trabalhar com retângulo: "<<std::endl;
            Retangulo meuRetangulo;
            meuRetangulo.coletarDadosRetangulo();
            meuRetangulo.calcular();
            break;
        }    
        default:
            std::cout<<"Opção inválida!!";
           
    }

    return 0;
}