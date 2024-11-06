#include <iostream>
 using namespace std;

int nota1;
int nota2;
int nota3;
 

 int main () { 
    cout << "dame 3 notas:" << endl;
    cout << "dame a 1º notas:" << endl;
    cin >> nota1;
    cout << "dame a 2º  notas:" << endl;
    cin >> nota2;
    cout << "dame a 3º 2notas:" << endl;
    cin >> nota3;

    cout<< "a tua media é:" << (nota1 + nota2 + nota3) / 3  << endl;
     
     

 
return 0;
 }