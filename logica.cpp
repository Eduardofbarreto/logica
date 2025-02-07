#include<iostream>

int main(){

int arr[4];
int modify;

std::cout<<"Digite 4 numeros inteiros: "<<std::endl;
std::cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

std::cout<<"Digite o indice do array trocado: "<<std::endl;
std::cin>>modify;

if(modify == 0){
    arr[0] = -1;
}else if(modify == 1){
    arr[1] = -1;
}else if(modify == 2){
    arr[2] = -1;
}else{
    arr[3] = -1;
}

std::cout<<"Os arrays ficaram: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<std::endl;

return 0;

}