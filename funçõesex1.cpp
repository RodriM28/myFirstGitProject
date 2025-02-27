#include <iostream>
using namespace std;

int x= 10;
int y =20;

int soma(int z, int a){
   
    return z + a;
}

int soma2(int& g){
    return 9 + soma(x,y);
}

void mostravalor(int g){
    system("clear");
    cout << g << endl;
}

int main(){

mostravalor(soma(soma(x,y),soma(x,y)));

    
}