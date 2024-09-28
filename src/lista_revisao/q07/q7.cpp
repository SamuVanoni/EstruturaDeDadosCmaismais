#include <iostream>
using namespace std;

int main(){
    int matriz1[4][5], matriz2[5][2], matriz3[4][2];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz1[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            cin >> matriz2[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            matriz3[i][j] = 0;
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 5; k++){
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}