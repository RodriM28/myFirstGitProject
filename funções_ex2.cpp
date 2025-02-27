#include <iostream>
using namespace std;

/**
 * @brief soma um numero inteiro com um dicimal
 * @param x numero inteiro
 * @param y numero dicimal
 * @return Soma dos dois números
 */

float soma(int x, float y){
    return x+y;
}

/**
 * @brief aseita duas ref. de int multiplica estes dois valores e soma 10
 * @param x ref 1
 * @param y ref 2
 * @return Soma dos dois números
 */

int multiplicar(int& x, int& y){

    return (x*y) + 10;
}
/**
 * @brief aceita 2 parametros 
 * @param x int
 * @param y int
 * @return resto de divisão
 */
 


 int retosdeivisao(int x, int y){

    return x % y;
 }
/**
 * @brief aceita um array
 * @param x array de inteiros
 * @return valor indice 0
 */

int valorindice0(int x[]){

    return x[0];
}

/**
 * @brief aceita um array int, um int e devolve o indi
 * @param x array in
 * @param y int
 * @return o indice de y
 */

int  intpassado(int x[],int y){

    return x[y];
}

/**
 * @brief imprime o array até ao y
 * @param x array in
 * @param y int
 */

void vloresarray(int x[],int y){
  for (int i = 0; i<y ; i++){
     cout << x[i] <<endl;
  }

}

//--------------------------------------------------------------------------
struct ponto{
    int x;
    int y;
};

ponto pontos[] = {{1,2},{3,4},{5,6}};

/**
 * @brief imprime os x do array pontod
 * @param x array in

 */

void vloresarray(ponto x[]){
  for (int i = 0; i<3 ; i++){
     cout << x[i].x <<" ";
  }
}

// _____________________________________________________________________________

int  dobro(int x){

    return x* 2;
}
/**
 * @brief retorna a o dobro da função de cima
 * @param x int
 * @return dobro int

 */

int  dobroRec(int x){

    return dobro(x);
}
/**
 * @brief aceita um array int copm 10 devolve a soma de todos
 * @param x array int
 * @return soma de todos 
 */

int somadoarray(int x[]){
int g = 0;
    for (int i = 0; i<10; i++){
        g += x[i];
    }
    return g;
}

//------------------------------------------------------------------------------------------




int main(){


    return 0;
}