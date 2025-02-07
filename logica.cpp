#include<iostream>

int main(){

int arr[5] = {1, 2, 3};
arr[1] = 10;

int tamanho = sizeof(arr) / sizeof(arr[0]);

std::cout<<tamanho;

return 0;

}