#include<iostream>

class MinhaClasse{
    public:
        void minhaFuncao(){
            std::cout<<"Algum conteúdo na classe pai!"<<std::endl;
        }
};

class MinhaOutraClasse{
    public:
        void minhaOutraFuncao(){
            std::cout<<"Algum conteúdo em outra classe!"<<std::endl;
        }
};

class MinhaClasseFilha : public MinhaClasse, public MinhaOutraClasse{

};

int main(){

    MinhaClasseFilha meuObj;
    meuObj.minhaFuncao();
    meuObj.minhaOutraFuncao();

    return 0;
}