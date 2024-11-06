#include <iostream>
 using namespace std;

     int numerosPares [20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
     
 int main() { 
    
     for(int x=0 ; x < 20; x++){
        if(numerosPares[x] %2 == 0 ){
         cout << "o numeros " <<  numerosPares[x] <<" é par" << endl;
         }else{ cout << "o numeros " <<  numerosPares[x] <<" é inper" << endl;
         }
     }
     return 0;
 }