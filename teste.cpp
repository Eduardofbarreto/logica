#include<iostream>
#include<string>
#include<iomanip>
#include<locale>

class Veiculo{
    public:
    std::string nome;
    std::string marca;
    int ano;
    double valor;

    Veiculo(std::string n, std::string m, int a,
    double v): nome(n), marca(m), ano(a), valor(v) {}

    virtual void exibirInformacoes(){
        std::cout<<"Nome: "<<nome<<std::endl;
        std::cout<<"Marca: "<<marca<<std::endl;
        std::cout<<"Ano: "<<ano<<std::endl;
        std::cout<<"Valor: R$ "<<std::fixed<<std::setprecision(2)<<valor<<std::endl;
        std::cout.imbue(std::locale("pt_BR.UTF-8"));
        std::cout.imbue(std::locale("C"));

    }
};

class Carro : public Veiculo{
    public:
    
    Carro(std::string n, std::string m, int a,
    double v) : Veiculo(n, m, a, v) {}

    void exibirInformacoes() override{
        std::cout<<"\nInformações sobre o carro: "<<std::endl;
        Veiculo::exibirInformacoes();
    }
};

class Moto : public Veiculo{
    private:
        int cilindradas;

    public:
        Moto(std::string n, std::string m, int a,
        double v, int cc) : Veiculo(n, m, a, v), cilindradas(cc){}

        void exibirInformacoes() override{
            std::cout<<"\nInformações sobre a moto: "<<std::endl;
            Veiculo::exibirInformacoes();
            std::cout<<"Cilindradas: "<<cilindradas<<std::endl;
        }
};

int main(){

    int escolha;

    std::cout<<"Escolha o tipo de veículo para fazer o cadastro: "<<std::endl;
    std::cout<<"1 - Carro"<<std::endl;
    std::cout<<"2 - Moto"<<std::endl;
    std::cout<<"Digite a sua escolha (1 ou 2)"<<std::endl;
    std::cin>>escolha;

    if(escolha == 1){
        //Cadastro carro
        std::string cNome;
        std::string cMarca;
        int cAno;
        double cValor;

        std::cout<<"Digite o nome do carro: "<<std::endl;
        std::cin>>cNome;
        std::cout<<"Digite a marca do carro: "<<std::endl;
        std::cin>>cMarca;
        std::cout<<"Digite o ano do carro: "<<std::endl;
        std::cin>>cAno;
        std::cout<<"Digite o valor do carro: "<<std::endl;
        std::cin>>cValor;

        Carro meuCarro(cNome, cMarca, cAno, cValor);
        meuCarro.exibirInformacoes();
    }else if(escolha == 2){
        //cadastro da moto
        std::string mNome;
        std::string mMarca;
        int mAno;
        double mValor;
        int mCilindradas;

        std::cout<<"Digite o nome da moto: "<<std::endl;
        std::cin>>mNome;
        std::cout<<"Digite a marca da moto: "<<std::endl;
        std::cin>>mMarca;
        std::cout<<"Digite o ano da moto: "<<std::endl;
        std::cin>>mAno;
        std::cout<<"Digite o valor da moto: "<<std::endl;
        std::cin>>mValor;
        std::cout<<"Digite as cilindradas da moto: "<<std::endl;
        std::cin>>mCilindradas;

        Moto minhaMoto(mNome, mMarca, mAno, mValor, mCilindradas);
        minhaMoto.exibirInformacoes();
    } else {
        std::cout<<"\nEscolha inválida. Por favor digite 1 ou 2."<<std::endl;
    }
        
        std::cout.imbue(std::locale("pt_BR.UTF-8"));
        std::cout.imbue(std::locale("C"));
        std::cout<<"\n"<<std::endl;

    return 0;
}
