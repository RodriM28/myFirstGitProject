#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//fazer as cartas
//fazer distribuição de 2 cartas
//O distribuidor ter uma carta
//fazer as condições

string cartas[15] = { "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "valete", "cavaleiro", "dama", "rei", "ace"};
int    pontos[15] = {   1  ,  2    ,  3    ,   4     ,  5     ,  6    ,  7    ,  8   ,    9   ,  10  ,  10    ,   10        ,  10   ,  10 ,   11};
int soma1 = 0;
int soma2 = 0;
int main(){

srand(time(0));

    cout << "_________________________________________________________________" << endl;
    cout << "                   bem vindo ao black Jake" <<endl;
    cout << "O jogo consiste em teres uma pontuação a sima do distribuidor" <<endl;
    cout << "Se tu tivers uma pontuação a cima de 21 arebenta e perdes" <<endl;
    cout << "_________________________________________________________________" << endl;


    cout << "_____________________________________________________________"<<endl;
    cout << "A qui tem as cartas e as pontuações:" <<endl;
            for(int x=0; x<15; x++){
                cout << cartas[x] <<" = " <<pontos[x]<<endl;
            }
    cout << "______________________________________________________________"<<endl;
    for(int i = 0; i<1; i++){
    int carta1 =  rand() %  15;
    cout << "cartas do destribuidor:" <<endl;
    cout << cartas[carta1]<<endl;
    
    }
    cout <<endl;
cout << "Tuas cartas: "<<endl;
    for(int i =0; i<2; i++) {
        int carta2 =  rand() %  15;
        cout << carta2[cartas] <<endl;
    }

    


    return 0;
}