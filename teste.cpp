#include<iostream>
#include<string>

int main(){

    std::string user, password;
    const std::string userCorreto = "edu";
    const std::string passwordCorreto = "1234";
    int numeroDeTentativas = 0;
    const int maxTentativas = 3;

    do{
        std::cout<<"Digite o seu user: "<<std::endl;
        std::cin>>user;
        std::cout<<"Digite seu password: "<<std::endl;
        std::cin>>password;
        if(user == userCorreto && password == passwordCorreto){
            std::cout<<"Login feito com sucesso!"<<std::endl;
            break;
        }else{
            numeroDeTentativas++;
            if(numeroDeTentativas < maxTentativas){
                std::cout<<"Usuário ou senha incorretos! Tente novamente!"<<std::endl;
                std::cout<<numeroDeTentativas<<std::endl;
            }
        }    
    }while(numeroDeTentativas < maxTentativas);
    
    if(numeroDeTentativas == maxTentativas){
        std::cout<<"Limite de tentativas atingido!"<<std::endl;
    }

    return 0;
}