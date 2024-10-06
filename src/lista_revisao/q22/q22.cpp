#include <iostream>
#include <fstream>
using namespace std;

void redimensiona(int*& vet, int& tam){
    tam += 5;
    int* novo_vet = new int[tam];
    for (int i = 0; i < tam - 5; i++) {
        novo_vet[i] = vet[i];
    }
    delete[] vet;
    vet = novo_vet;
}

int main(){
    int tam = 5;
    int* vet = new int[5];

    int x;
    int cont = 0;
    int contandoRedimensionamentos = 0;

    ifstream inputFile("dados.bin", ios::binary);
    if (!inputFile) {
        cerr << "Erro ao abrir o arquivo dados.bin." << endl;
        return 1;
    }
    while (inputFile.read(reinterpret_cast<char*>(&x), sizeof(x))) {
        if (x <= 0) break; // Se for não positivo, termina a leitura
        if (cont % 5 == 4) {
            redimensiona(vet, tam);
            contandoRedimensionamentos++;
        }
        vet[cont] = x;
        cont++;
    }
    inputFile.close();

    cin >> x;
    while(x > 0){
        if(cont % 5 == 4){
            redimensiona(vet, tam);
            contandoRedimensionamentos++;
        }
        vet[cont] = x;
        cont++;
        cin >> x;
    }

    for(int i = 0; i < cont; i++){
        cout << vet[i] << " ";
    }
    cout << endl << tam << endl << contandoRedimensionamentos << endl;

    delete[] vet;
    return 0;
}