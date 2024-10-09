#include <iostream>
#include <fstream>
using namespace std;

void lerMatrizes(ifstream& entrada, int**& matriz1, int**& matriz2, int& tamanho, int& countMax) {
    entrada >> tamanho;

    matriz1 = new int*[tamanho];
    matriz2 = new int*[tamanho];

    countMax = 0;

    for (int i = 0; i < tamanho; i++) {
        matriz1[i] = new int[tamanho];
        for (int j = 0; j < tamanho; j++) {
            entrada >> matriz1[i][j];
            if (matriz1[i][j] > countMax) countMax = matriz1[i][j];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        matriz2[i] = new int[tamanho];
        for (int j = 0; j < tamanho; j++) {
            entrada >> matriz2[i][j];
            if (matriz2[i][j] == 1) matriz1[i][j] = 0; // Marcar tiro no navio
        }
    }
}

int contarNaviosAfundados(int** matriz, int tamanho, int countMax) {
    int ans = 0;

    for (int count = 1; count < countMax; count++) {
        bool achou = false;
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                if (count == matriz[i][j] && !achou) achou = true;
            }
        }
        if (!achou) ans++;
    }
    
    return ans;
}

void liberarMatrizes(int** matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    ifstream entrada("BatalhaNaval.txt");
    if (!entrada) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    int** matriz1;
    int** matriz2;
    int tamanho;
    int countMax;

    lerMatrizes(entrada, matriz1, matriz2, tamanho, countMax);
    entrada.close();

    int resultado = contarNaviosAfundados(matriz1, tamanho, countMax);
    cout << resultado << endl;

    liberarMatrizes(matriz1, tamanho);
    liberarMatrizes(matriz2, tamanho);

    return 0;
}