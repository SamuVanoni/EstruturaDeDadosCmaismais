#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int count = 0;
    char letra;

    ifstream entrada("Meu_Arquivo.txt");
    if (!entrada.is_open()) {
        cout << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    while (entrada.get(letra)) {
        if (letra != ' ' && letra != '\n' && letra != '\t') {
            count++;
        }
    }

    cout << count << endl;

    entrada.close();
    return 0;
}
