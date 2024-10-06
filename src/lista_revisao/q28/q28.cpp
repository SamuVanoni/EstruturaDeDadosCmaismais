#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x;
    char* vet = new char[x];
    for(int i = 0; i < x; i++){
        cin >> vet[i];
    }

    cin >> y;
    char* vet2 = new char[y];
    for(int i = 0; i < y; i++){
        cin >> vet2[i];
    }

    int count = 0;
    char* vet3 = new char[x];
    for(int i = 0; i < x; i++){
        bool achou = false;
        for(int j = 0; j < y; j++){
            if(vet2[j] == vet[i] and !achou){
                achou = true;
            }
        }
        if(!achou){
            vet3[count] = vet[i];
            count++;
        }    
    }

    // Falta so redimensionar o vetor p o tamanho correto (preguiça de fazer)
    for(int i = 0; i < count; i++){
        cout << vet3[i];
        if(i != count - 1)
            cout << " ";
    }

    return 0;
}