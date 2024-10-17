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

    return 0;

}