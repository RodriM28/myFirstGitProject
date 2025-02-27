#include <iostream>
using namespace std;
float frequencia;
const double H = 6.63e-34;
float lambda;
 int numeroorbita;
 float energia;
 

float contaEnergiaFotoes(float f = frequencia,float h = H){  // defeni por defeito
    return h * f;
}

float contavelocidadeluzvaco(float f= frequencia, float lambda = lambda){
    return f* lambda;
} 

float energiarotahidro(float n = numeroorbita){
    return 2,18e-10*(n*n);
}

//______________________________________________________________________



int main(){
    system("clear");
   // cout <<"frequencia: ";
   // cin>>frequencia;
   //cout << "Energia " << contaEnergiaFotoes() <<endl;
    //___________________________________________________________

   // cout <<"frequencia: ";
   // cin>>frequencia;
   // cout <<"comprimento de onta: ";
   // cin >> lambda;
   // cout << "Velocidade da luz o vaco: "<< contavelocidadeluzvaco()<<endl;
    //_________________________________________________________________

   // cout << "Numero da orbita: ";
   // cin >> numeroorbita;
   // cout <<"Energia da rota da orbita de hidrogenio: "<<energiarotaatemo()<<endl;
   //_________________________________________________________________________


    return 0;
}