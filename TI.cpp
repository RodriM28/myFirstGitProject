#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void tbuada () {


    int numero;
 
    cout << "Digite um numero" << endl;
    cin >> numero;
  
    for( int i=0; i<=10; i++ ) cout << i << ' x ' << numero << " = "<< i * numero << endl;
        
}

void inverteNome() {

string nome;
cout << "Digite o Seu Nome " << endl;
cin >> nome;

int dimensao = nome.length();

for(int x= dimensao-1; x>= 0 ; x--){
    cout << nome[x];

}
cout << " " << endl;
} 

void tpcJogoAdivinhaLetra(){

    /*
    Jogo adivinha letra
    
    Terás um array com as letras minúculas do alfabeto 
    e o computador escolherá uma letra aleatória.
    
    O jogador teá que adivinhar a letra escolhida*/
     
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
}






int main() {
 
 tpcJogoAdivinhaLetra();


    return 0;
}