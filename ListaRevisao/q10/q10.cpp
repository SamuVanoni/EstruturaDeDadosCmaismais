#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int matriz[y][x];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> matriz[j][i];
        }
    }

    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}