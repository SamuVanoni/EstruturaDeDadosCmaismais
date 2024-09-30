#include <iostream>
using namespace std;

int *geraVetor(int n){
    int *V = new int[n];
    return V;
}

int main(){
    int x, y;
    cin >> x;
    int *vet1 = geraVetor(x);
    for(int i = 0; i < x; i++){
        cin >> vet1[i];
    }

    cin >> y;
    int *vet2 = geraVetor(y);
    for(int i = 0; i < y; i++){
        cin >> vet2[i];
    }

    int *vet3 = geraVetor(x + y);
    for(int i = 0; i < x; i++){
        vet3[i] = vet1[i];
    }
    for(int i = 0; i < y; i++){
        bool sentinel = true;
        for(int j = 0; j < x; j++){
            if(vet2[i] == vet3[j]){
                sentinel = false;
            }
        }
        if(sentinel){
            vet3[x] = vet2[i];
            x++;
        }
    }

    for(int i = 0; i < x; i++){
        cout << vet3[i] << " ";
    }

    delete[] vet1;
    delete[] vet2;
    delete[] vet3;

    return 0;
}