#include <iostream>
using namespace std;

int main() {
    system("clear");

    string frase, frase_oculta;
    char tentativa;
    

    cout << "\t\t\t" << "Bem-vindo ao jogo" << endl;
    cout << "\t" << "Jogador 1 seleciona uma frase." << "\n";
    cout << "\n\t" << "Jogador 1, coloque a frase abaixo: ";
    getline(cin, frase);

    system("clear");

   
    for (char c : frase) {
        frase_oculta += (c == ' ') ? ' ' : '_';
    }

   
    while (frase_oculta != frase) {
        cout << "\n" << "Frase: " << frase_oculta << endl;
        cout << "Digite uma letra: ";
        cin >> tentativa;
       
       int i = 0;
        for (char c : frase) {
            system("clear");
            if (c == tentativa && frase_oculta[i] == '_') {
                frase_oculta[i] = c;
               
               
            }
            i++;
        }

}
    cout << "\n" << "Parabéns! Você descobriu a frase: " << frase << endl;
    return 0;
}
