#include <iostream>
#include <cmath>
using namespace std;

float a;
float b;
float c;

//(-b ± √(b² - 4ac)) / 2a
// sqrt()(rai quadrada)

void equação(float a=a, float b = b , float c = c){
    float positivo,  negativo;
    float cosiente;
    cosiente = sqrt((b*b)-4*(a*c));

    if(cosiente<0){
        cout << "Deu cosiente negativo" <<endl;
     
    }else{

   positivo = (-b + sqrt(cosiente)) / (2 * a);
   negativo =(-b - sqrt(cosiente)) / (2 * a);

   cout<< "Positivo: "<<positivo<<endl;
   cout << "Negativo:"<<negativo<<endl;
    }


}
int main() {
 
    system("clear");
    cout << "Insira o a: ";
    cin >> a;
    cout << "Insira o b: ";
    cin >> b;
    cout << "Insira o c: ";
    cin >> c;
    

  equação();
    return 0;
}