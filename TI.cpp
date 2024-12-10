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

void euromilhoes(){

srand(time(0));
cout << "Números: ";
 for(int i= 0; i<5; i++) cout << rand () % 45 << " / ";
 cout << endl;
 cout << "Estrelas: ";
for(int i= 0; i<2; i++) cout << rand () % 12 << " / ";
cout << endl;
}

void tpcbingo(){ 

    /*
    JOgo do Bingo
    
    1ºParte 
    Séra pedido ao utilizador quantos cartões de bingo ele deseja gerar. cada cartão de bingo terá 5 linha e 5 colunas e
    preenchidos com números aleatórios de  1 a 75.

    Serão gerados tantos cartões quandos o utilizador indicar.
    (O utilizador poderá passar os cartões para u papel)

    2ºParte
    O computador irá sortear números aleatórios de 1 a 75.
    Ganha o jogador que completar o cartão de bingo primeiro.

    Regras do bingo:
    Não podéra haver números repetidos no cartão.
    o CARTÃO DO BINGO TÉRA 5 LINHAS E 5 COLUNAS.
    O cartãode bingo terá números de 1 a 75.
    Não podem ser sorteados números repetidos.
    */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 

int tamanhodocartao = 5; 
 int cartoes;
 bool umcartoes = true;
 

cout << "Bem vindo ao jogo do bingo!!" <<endl;
cout << "Pode escolher entre 1 ou 2 cartões"<<endl;
 cout<< "Quantos cartoes deseja?:";
    cin >> cartoes;
    
   if (cartoes < 1 || cartoes > 2) {
        cout << "Só pode ser 1 ou 2 cartões." << endl;
    }

 struct NumerosDoCartao {
        int numero;
        bool jogado;
    };

    NumerosDoCartao num[75];
    for (int i = 0; i < 75; i++) {
        num[i].numero = i;
        num[i].jogado = false;
    }
  
    int cartao1[tamanhodocartao][tamanhodocartao];
     int cartao2[tamanhodocartao][tamanhodocartao];
    bool usados[76] = {false}; // Para verificar se o número já foi sorteado

    for (int y = 0; y < tamanhodocartao; y++) {
        for (int x = 0; x < tamanhodocartao; x++) {
            int numero;
            do {
                numero = rand() % 75 + 1; // Gera número entre 1 e 75
            } while (usados[numero]); // Garante que o número não foi usado

            usados[numero] = true; // Marca o número como usado
            cartao1[x][y] = numero; // Preenche o cartão
        }
    }
  if (cartoes == 2) {
        for (int y = 0; y < tamanhodocartao; y++) {
            for (int x = 0; x < tamanhodocartao; x++) {
                int numero;
                do {
                    numero = rand() % 75 + 1; // Gera número entre 1 e 75
                } while (usados[numero]); // Garante que o número não foi usado

                usados[numero] = true; // Marca o número como usado
                cartao2[x][y] = numero; // Preenche o cartão
            }
        }
    }

    cout << "Seu cartão 1: " << endl;
    for (int y = 0; y < tamanhodocartao; y++) {
        for (int x = 0; x < tamanhodocartao; x++) {
            cout << cartao1[x][y] << "\t";
        }
        cout << endl;
    }

    // Exibe o segundo cartão, se necessário
    if (cartoes == 2) {
        cout << "\nSeu cartão 2: " << endl;
        for (int y = 0; y < tamanhodocartao; y++) {
            for (int x = 0; x < tamanhodocartao; x++) {
                cout << cartao2[x][y] << "\t";
            }
            cout << endl;
            
        }
    }
    
    int tentativas = 75;
     while (tentativas > 0) {
     int numeros;
   numeros = rand() % 75 + 1; 
   int enter;
   cin >> enter; 
   if(enter = 5){
       cout << "O numero aliatorio é:" << numeros <<endl;
   }
    
    tentativas --;
     }
}





int main() {
 
 tpcbingo();
 
    return 0;
}