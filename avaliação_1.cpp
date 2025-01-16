#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int escolha;
int quantidade;

int main() {
    srand (time(0));
  
    
    cout << "Bem vindo a roleta aleatoria" <<endl;
    cout << "Tem doi tipos de roleta" <<endl;
    cout <<"1-Nomes" <<endl;
    cout <<"2-Numeros" <<endl;
    cout << "Escolhe um dos 2 tipos da roleta: " <<endl;

    cin >> escolha;
    if(escolha<1 || escolha>2){
        cout <<"Só pode 1 ou 2" <<endl;
        return 0;
    }
    cout << "Agora escolhe a quantidade de elementos que a tua roleta vai ter entre 2 a 40: ";
    cin >> quantidade; 
    if(quantidade<2 || quantidade>40){
        cout <<"Só pode de 2  a 40 elementos" <<endl;
        return 0;
    }

    if(escolha == 1){
        string nomes[quantidade];
        bool sorteados[quantidade]= {false};
        
        for(int i = 0; i<quantidade; i++){
            cout << "Insira o nome " << i + 1<< ":";
            cin >> nomes[i];
        }

         for(int i = 0; i<quantidade; i++){
            cout << "Para sortear os nomes pressione enter" <<endl;

            cin.ignore();
            cin.get();

            int aleatorio;

            do{
                aleatorio = rand() % quantidade; 
            }while(sorteados[aleatorio]);

            sorteados[aleatorio] = true;
            cout << "O nome sorteado foi: " << nomes[aleatorio] <<endl;
  
    }
       cout << "já não a elementos na roleta!!" <<endl;
    }else if(escolha == 2){
            double numeros[quantidade];
        bool sorteados[quantidade]= {false};
        
        for(int i = 0; i<quantidade; i++){
            cout << "Insira o numero " << i+1 << ":";
            cin >> numeros[i];
        }

         for(int i = 0; i<quantidade; i++){
            cout << "Para sortear os numeros pressione enter" <<endl;

            cin.ignore();
            cin.get();

            int aleatorio;

            do{
                aleatorio = rand() % quantidade; 
            }while(sorteados[aleatorio]);

            sorteados[aleatorio] = true;
            cout << "O nome sorteado foi: " << numeros[aleatorio] <<endl;

          


    };
     cout << "já não a elementos na roleta!!" <<endl;
    }

    
    return 0;
}