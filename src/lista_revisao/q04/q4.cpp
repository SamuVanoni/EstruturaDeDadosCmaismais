#include <iostream>
using namespace std;

int main(){
    int vet[8];

    for(int i = 0; i < 8; i++){
        int x;
        cin >> x;

        int count = 0;
        bool achouMaior = false;
        while((count < i) and !achouMaior){ // Do 2° elemento em diante
            if(vet[count] > x){
                achouMaior = true;
            }
            count++;
        }

        if(achouMaior){
            int aux[8];
            for(int j = 0; j < i+1; j++){
                aux[j] = vet[j];
            }
            for(int j = count; j < i+1; j++){
                vet[j] = aux[j-1];
            }
            vet[count-1] = x;
        }
        else{ // Armazena o 1° elemento e caso n tenha maior (final)
            vet[i] = x;
        }

        // Realizando a impressão a cada inserção
        for(int j = 0; j < i+1; j++){
            cout << vet[j] << " ";
        }
        cout << endl;
    }

    return 0;
}