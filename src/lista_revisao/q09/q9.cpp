#include <iostream>
using namespace std;

int main(){
    int matriz[8][8];
    int linha, coluna = -1;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                linha = i;
                coluna = j;
            }
        }
    }

    bool sentinel = false;
    int i = linha - 1;
    while(i >= 0 and !sentinel){ //p cima
        if(matriz[i][coluna] == 2){
            cout << i << " " << coluna << endl;
            sentinel = true;
        }
        i--;
    }

    sentinel = false;
    i = coluna - 1;
    while(i >= 0 and !sentinel){ //p esquerda
        if(matriz[linha][i] == 2){
            cout << linha << " " << i << endl;
            sentinel = true;
        }
        i--;
    }

    sentinel = false;
    i = coluna + 1;
    while(i < 8 and !sentinel){ //p direita
        if(matriz[linha][i] == 2){
            cout << linha << " " << i << endl;
            sentinel = true;
        }
        i++;
    }

    sentinel = false;
    i = linha + 1;
    while(i < 8 and !sentinel){ //p baixo
        if(matriz[i][coluna] == 2){
            cout << i << " " << coluna << endl;
            sentinel = true;
        }
        i++;
    }
    

    return 0;
}