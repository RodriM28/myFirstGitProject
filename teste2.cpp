#include <iostream>
 using namespace std;

 int main() {
    char vogal; // criar uma varival do tipo char porque é para aparece so uma letra se mais de 1 era string

    cout << "Introduza uma vogal:" << endl; //para aparecer no ecra
    cin >> vogal;

   // switch(vogal) {
   //case 'a'
     // cout << "A vogal é: (a) (A)" << endl;
       // break;
      //  case 'b'
      //  cout << "A vogal é: (e) (E)" << endl;
       // break;
      //  case 'i'
       // cout << "A vogal é: (i) (I)" << endl;
       //break;
       // case 'o'
       // cout << "A vogal é: (o) (O)" << endl;
       //break;
       //case 'u'
       // cout << "A vogal é: (u) (U)" << endl;
       //break;
       //defaut:
       //cout << " Esta palavra não é uma volgal"
       //break;


       // com o switch demora mais tempo e é menos eficient

       if(vogal == 'a' || vogal == 'e' || vogal == 'i' | vogal == 'o' | vogal == 'u' ) {
       cout << "Avogal digitada é:" << vogal << endl;
       }else{
        cout << "A letra digitado não é vogal" << endl;
       }
    }
 