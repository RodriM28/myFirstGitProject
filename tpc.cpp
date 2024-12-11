
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;






int main() {
 const int tamanhodocartao = 5; 
 int cartoes;
 int quoantidade =2;
 srand(time(0));
 cout << "________________________________________"<<endl;
cout << "Bem vindo ao jogo do bingo!!" <<endl;
cout << "Pode escolher entre 1 ou 2 cartões"<<endl;
cout << "Para sair os numeros clica no 5"<<endl;
cout << "__________________________________________"<<endl;
 cout<< "Quantos cartoes deseja?:";
    cin >> cartoes;
    

   if (cartoes < 1 || cartoes > 2) {
        cout << "Só pode ser 1 ou 2 cartões." << endl;
      return 0;
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
    
    bool aliatorio[76] = {false}; 
    int tentativas = 75;
     while (tentativas > 0) {
     int numeros;
    do {
    numeros = rand() % 75 + 1; // Gera número entre 1 e 75
     } while (usados[numeros]); // Garante que o número não foi usado
      aliatorio[numeros] = true; // Marca o número como usado
   int enter;
   cin >> enter; 
   if(enter = 5){
       cout << "O numero aliatorio é:" << numeros <<endl;
   }
    
    tentativas --;
     }

    return 0;
}