#include <iostream>
using namespace std;

int main(){
   char vogais[] = {'a','e','i','o','u'};


   for(char vogal : vogais){
    cout << "Insira um numero para a vogal "<< vogal <<":";
    int numero;
    cin >>numero;
    cout << "O numero da vogal é :" << numero << "-"<<vogal<<endl;
   }
   

    return 0; 
}