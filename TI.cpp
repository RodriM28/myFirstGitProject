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
     
     int letraescolhida;


 char alfabeto[] { 'a', 'b', 'c','d', 'e', 'f','g','h', 'i' ,'j', 'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,' q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z' };

 srand (time(0));
 int alfabeto  = rand () % 26; 
  

    cout << "Bem vindo ao jogo adivinha a letra!!"<<endl;
    cout << "Neste jogo vais ter que adivinhar a letra"<< endl;
    cout << "Vais ter 4 tentativas"<< endl;
    cout << "Boa sorte"<<endl;
         
}





int main() {
 
 tpcJogoAdivinhaLetra();
 // srand (time(0));
 //int indice = rand () % 26; ( vais dar um numero aliatoria 0 a 26)

    return 0;
}