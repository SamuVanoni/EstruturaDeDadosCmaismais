#include <iostream>
using namespace std;

void imprimirMatriz(int matriz[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matriz[10][10];
    int matrizAux[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> matriz[i][j];
            matrizAux[i][j] = matriz[i][j];
        }
    }

    cout << "1." << endl;
    for(int i = 0; i < 10; i++){
        matriz[7][i] = matrizAux[1][i];
        matriz[1][i] = matrizAux[7][i];
    }
    imprimirMatriz(matriz);

    cout << "2." << endl;
    for(int i = 0; i < 10; i++){
        matriz[1][i] = matrizAux[1][i];
        matriz[7][i] = matrizAux[7][i];
    }
    for(int i = 0; i < 10; i++){
        matriz[i][3] = matrizAux[i][9];
        matriz[i][9] = matrizAux[i][3];
    }
    imprimirMatriz(matriz);

    cout << "3." << endl;
    for(int i = 0; i < 10; i++){
        matriz[i][9] = matrizAux[i][9];
        matriz[i][3] = matrizAux[i][3];
    }
    for(int i = 0; i < 10; i++){
        matriz[i][9-i] = matrizAux[i][i];
        matriz[i][i] = matrizAux[9-i][i];
    }
    imprimirMatriz(matriz);

    cout << "4." << endl;
    for(int i = 0; i < 10; i++){
        matriz[i][i] = matrizAux[i][i];
        matriz[9-i][i] = matrizAux[9-i][i];
    }
    for(int i = 0; i < 10; i++){
        matriz[4][i] = matrizAux[9][i];
        matriz[i][9] = matrizAux[4][i];
    }
    imprimirMatriz(matriz);

    return 0;
}