#include<iostream>
#include<string>

class Imovel{
    private:
    std::string cor = "Rosa";

    public:
    Imovel(){}

    std::string getcor(){
        return cor;
    }

    void setcor(std::string c){
        cor = c;
    }

    void exibir(){
        std::cout<<"Essa é a casa "<<getcor()<<std::endl;
    }    

};

class Apto : public Imovel{
    public:
    int tamanho = 50;

    Apto(){}

    void exibir(){
        Imovel::exibir();
        std::cout<<"Com "<<tamanho<<" metros quadrado."<<std::endl;
    }
};

int main(){

    Apto ap;
    ap.exibir();

    return 0;
}
