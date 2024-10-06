#include <iostream>
using namespace std;

bool buscaElemento(int** matriz, int x, int y, int procurado, int &linha, int &coluna) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (matriz[i][j] == procurado) {
                linha = i;
                coluna = j;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int x, y;
    cin >> x >> y;

    int** matriz = new int*[x]; // Alocação da matriz dinamicamente
    for (int i = 0; i < x; i++) {
        matriz[i] = new int[y];
    }

    for (int i = 0; i < x; i++) { // Lendo os valores da matriz
        for (int j = 0; j < y; j++) {
            cin >> matriz[i][j];
        }
    }

    int procurado, linha, coluna;
    cin >> procurado;

    if (buscaElemento(matriz, x, y, procurado, linha, coluna)) {
        cout << linha << " " << coluna << endl;
    } else {
        cout << "ausente" << endl;
    }

    for (int i = 0; i < x; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
