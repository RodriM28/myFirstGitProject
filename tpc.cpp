
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;






int main() {
 
  char letraescolhida;
  int tentativas = 5;
  bool acertou = false;
 char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

 srand (time(0));
 int letraaliatoria  = rand () % 26; 
  cout <<letraaliatoria  << endl;
    cout << "______________________________________________________" << endl;
    cout << "Bem vindo ao jogo adivinha a letra!!"<<endl;
    cout << "Neste jogo vais ter que adivinhar a letra"<< endl;
    cout << "Vais ter 5 tentativas"<< endl;
    cout << "Boa sorte!"<<endl;
    cout << "______________________________________________________"<< endl;
    

        while (tentativas > 0) {
        cout << "\nEscolha  a uma letra: ";
        cin >> letraescolhida;

        
   
   if( letraescolhida < letraaliatoria ) {
    cout << " Erraste tenta mais uma vez"<<endl;
    cout << "A letra é maior"<< endl;
   } else if ( letraescolhida > letraaliatoria){
    cout << " Erraste tenta mais uma vez"<<endl;
    cout << "A letra é menor" << endl;
   } else if (letraescolhida == letraaliatoria){
    bool acertou = true;
    cout <<"Boa!!! está correto" << endl;
    break;
   }
     tentativas--;
   if (tentativas > 0) {
            cout << "Tentativas restantes: " << tentativas << endl;
        } else {
            cout << "Game Over! A letra correta era: " << letraaliatoria << "." << endl;
        }
    }
    return 0;
}