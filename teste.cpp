//programa básico de c++ para testar om funcionamento do comp

#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!"<< endl;

    //Adição de números
    //cout << 3 + 3 << endl;
    //subtração 
    //cout << 3 - 3 << endl;
    // multiplicação
    //cout << 3 * 3 << endl;
    //divisão
    //cout << 3 / 3 << endl;
    //reto de disisão
    //cout << 5 % 3 << endl;

    //Variáveis sempre minúsculas ou camel case, numca deve começar por um número
    int qntLivros = 5;
    int x, y, z;
    x = 25;
    cout << qntLivros * 2 << endl;
    cout << qntLivros + 5 << endl;
    cout << qntLivros - 2 << endl;

    bool isTrue = true;// o bool so diz se é verdadeiro o falso (true ou false)
    bool isHigh;
    isHigh = false;

    float altura = 1.75; //Numoros naturais conjunto N na matematica 
    float peso;
    peso = 34.6;

    double altura2 = 1.75;
    double peso2;
    peso2 = 34.6;

    char letra = 'a';
    char letra2;
    letra2 = 'b';

    string nome = "Rodrigo";// string é um conjunto de char (como fose varias vezes o char)
    string sobrenome;
    sobrenome = "Martins";

    cout << "Nome:" << nome << " " << sobrenome << endl;


    //2* pi * r
    const float PI = 3.1416; // constantes n pode ser alterado dorante o codigo / pode ser float po duble 
    const int X = 2;

    float valor;

    cout <<"indique o valor do raio:"<< endl;
    cin >> valor; // vai dar um output
    cout << X * PI * 5 << endl;

 int x=1,y=2,z=9;
 char abc = 'a';

    //operadores logiccos
    // ==    Igual (compara)
    //!=     Diferernte  
    //>      Maior
    //<      Menor
    //>=     Maior ou igual
    //<=     Menor ou igual

    //&&   significa e (i)
    //|| (chamasa pipes) signigica ou
/*
int x = 1;
int y = 2;
    if( x ==1 || y == 5){
        cout << "um deles bate certo << endl;
    }eles{
    cout << "nop...." << endl;
    }
*/
    
    int x = 1;
    int y = 2;
    int z = 3; 
//eles if é uma condição que so é chamada se a anterior for falsa
 
  int time = 20;
  if (time < 18) {
    cout << "bom dia" << endl;
  }else{
    cout << "BOA NOITE" << endl;
  }

  string result = (time<  18) ? "bom dia" : "boa noite";
  cout << result;

  int day; //Ta a declarar dia do tipo inteiro
  cout << "digite um numaro 1,2,3";
cin >> day; //esta espera de definir a variaval
day = 2;

switch (day) { //ele compara a variaval que ja foi defenida com a que TÃO no bloco 
 case 1:
 cout << "Segunda" <<endl;
 break;
 case 2:
 cout << "segunda" << endl;
 break;
 case 3:
 cout << "terça" << endl;
 break;
 default:
 cout << "Dia inválido" << endl;
}

}