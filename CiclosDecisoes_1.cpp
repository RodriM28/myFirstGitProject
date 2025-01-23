#include <iostream>
using namespace std;


char vogais[] = {'a','e','i','o','u'};

int main(){
  


   for(char vogal : vogais){
    cout << "Insira um numero para a vogal "<< vogal <<":";
    int numero;
    cin >>numero;
    cout << "O numero da vogal é :" << numero << "-"<<vogal<<endl;
   }
   

    return 0; 
}