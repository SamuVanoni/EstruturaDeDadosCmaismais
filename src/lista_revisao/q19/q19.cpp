#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream entrada("entrada.txt");
    if (!entrada) {
        cout << "Erro na abertura do arquivo entrada.txt" << endl;
        return 1;
    }

    int x;
    entrada >> x;
    int* vet = new int[x];

    int count = 0;
    int y;

    for (int j = 0; j < x; j++) {
        entrada >> y;
        bool achou = false;

        for (int i = 0; i < count; i++) {
            if (y == vet[i] and !achou) {
                achou = true;
            }
        }

        if (!achou) {
            if (count < x) {
                vet[count] = y;
                count++;
            }
        }
    }
    entrada.close();

    ofstream saida("saida.txt");
    for (int i = 0; i < count; i++) {
        saida << vet[i];
        if (i != count - 1)
            saida << " ";
    }
    saida.close();

    delete[] vet;
    return 0;
}
