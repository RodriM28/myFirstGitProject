#include <iostream>
using namespace std;


struct carro{
    string marca;
    string matricula;
};

carro carros[] = {
    {"ferrari", "" },
    {"fiat",""},
    {"dacia",""},
    {"renault",""}
    
};

int main(){

    for(carro c : carros){
        
        cout << "Insira a matricula do "<<c.marca <<":";
        cin >> c.matricula;
        cout << " A matricula do "<<c.marca << " é " << c.matricula <<endl;
       



    }
  


   

    return 0; 
}