#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    srand(time(0)); // Inicializa o gerador de números aleatórios
    int escolha;
    int quantidade;

    cout << "Bem-vindo à roleta aleatória" << endl;
    cout << "Tem dois tipos de roleta:" << endl;
    cout << "1 - Nomes" << endl;
    cout << "2 - Números" << endl;
    cout << "Escolha um dos 2 tipos de roleta: ";
    cin >> escolha;

    if (escolha < 1 || escolha > 2) {
        cout << "Só pode escolher 1 ou 2!" << endl;
        return 0;
    }

    cout << "Agora escolha a quantidade de elementos que sua roleta terá (entre 2 e 40): ";
    cin >> quantidade;
    if (quantidade < 2 || quantidade > 40) {
        cout << "Só pode de 2 a 40 elementos!" << endl;
        return 0;
    }

    if (escolha == 1) {
        // Roleta de nomes
        string nomes[quantidade];
        bool sorteados[quantidade] = {false}; // Inicializa todos como "não sorteados"

        for (int i = 0; i < quantidade; i++) {
            cout << "Insira o nome " << i + 1 << ": ";
            cin >> nomes[i];
        }

        for (int i = 0; i < quantidade; i++) {
            cout << "Pressione Enter para sortear um nome..." << endl;
            cin.ignore();
            cin.get();

            int aleatorio;

            // Sorteia até encontrar um índice não sorteado
            do {
                aleatorio = rand() % quantidade;
            } while (sorteados[aleatorio]);

            // Marca o índice como sorteado e exibe o nome
            sorteados[aleatorio] = true;
            cout << "O nome sorteado foi: " << nomes[aleatorio] << endl;
        }

        cout << "Já não há elementos na roleta!" << endl;

    } else if (escolha == 2) {
        // Roleta de números
        double numeros[quantidade];
        bool sorteados[quantidade] = {false}; // Inicializa todos como "não sorteados"

        for (int i = 0; i < quantidade; i++) {
            cout << "Insira o número " << i + 1 << ": ";
            cin >> numeros[i];
        }

        for (int i = 0; i < quantidade; i++) {
            cout << "Pressione Enter para sortear um número..." << endl;
            cin.ignore();
            cin.get();

            int aleatorio;

            // Sorteia até encontrar um índice não sorteado
            do {
                aleatorio = rand() % quantidade;
            } while (sorteados[aleatorio]);

            // Marca o índice como sorteado e exibe o número
            sorteados[aleatorio] = true;
            cout << "O número sorteado foi: " << numeros[aleatorio] << endl;
        }

        cout << "Já não há elementos na roleta!" << endl;
    }

    return 0;
}