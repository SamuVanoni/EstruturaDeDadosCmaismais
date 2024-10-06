#include <iostream>
using namespace std;

int main(){
    int matriz[10][10];
    int countMax = -1;
    int linha = -1;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> matriz[i][j];
            if(countMax < matriz[i][j]){
                countMax = matriz[i][j];
                linha = i;
            } 
        }
    }

    int countMin = countMax;
    int coluna = -1;
    for(int i = 0; i < 10; i++){
        if(countMin > matriz[linha][i]){
            countMin = matriz[linha][i];
            coluna = i;
        } 
    }

    cout << countMin << endl << linha << " " << coluna << endl;

    return 0;
}