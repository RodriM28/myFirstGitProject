#include <iostream>
using namespace std;
 const float PI = 3.14159;   
 float raio;

int main () {

cout <<  "Digite o valor do raio: ";
cin >>raio;
cout << "O perimetro da circunferencia é: " 
    << 2*PI*raio << endl;
    cout << "A área da circunferência é: "
        <<  PI*(raio*raio) << endl;
    cout << "Diametro" 
        << 2*raio << endl; 


     return 0;
}