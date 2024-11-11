#include <iostream>
using namespace std;
 float horas;
 float salariohora;
 float resultado;
 float DESCONTOIRS ;
 float IRS = 0.125;
int main() {
   cout << "quanto horas trabalhaste:"<< endl;
   cin >> horas;
   cout << "quanto ganhas a hora" << endl;
   cin >> salariohora;
   cout << "ganhaste:" <<  horas * salariohora   <<endl;
    resultado = horas * salariohora ;
   DESCONTOIRS = resultado - IRS;
   cout << "com os decontos do IRS: " << DESCONTOIRS <<endl;

    return 0;
}