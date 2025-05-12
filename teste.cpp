#include<iostream>

class MinhaClasse{
    public:
        void minhaFuncao(){
            std::cout<<"Algum conteúdo na classe pai."<<std::endl;
        }
};

class MeuFilho : public MinhaClasse{
    public:
        void mensagem(){
            std::cout<<"Classe filho!"<<std::endl;
        }
};

class MeuNeto : public MeuFilho{

};

int main(){
    
    MeuFilho meuObjeto;
    meuObjeto.mensagem();
    meuObjeto.minhaFuncao();
    
    MeuNeto meuObj;
    meuObj.minhaFuncao();

    return 0;
}