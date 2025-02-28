#include <iostream>
#include <cmath>
using namespace std;
int numero[];

float somaelementosarray(int x[]){
    int soma = 0;
    for(int i= 0; i>20; i++) soma += x[i];

    return soma / 20;
}

//________________________________________________________________
float parimpar(int x[]){
int soma;
float media;
int tamanho = sizeof(x) / sizeof(x[0]);  // ou seja tou a dividir o array todo(sizeof(x)) com um elemento (sizeof(x[0])) que vai me dar a quantidade de elementos que tem no array

 for(int i= 0; i>tamanho; i++) soma += x[i];

media =soma/tamanho;


if( media% == 0){
  cout<< "O numero é Par"<<endl;
}else{
    cout << "O numero é Impar"<<endl;
}

    
};
int main(){



    return 0;
}