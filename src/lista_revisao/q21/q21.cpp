#include <iostream>
#include <fstream>
using namespace std;

int menor(float* vetor, int tam, int contador, int pos) {
    if (contador < tam) {
        if (vetor[contador] < vetor[pos]) {
            pos = contador;
        }
        return menor(vetor, tam, contador + 1, pos);
    }
    return pos;
}

int main() {
    int tam = 10;
    float* vetor = new float[tam];
    
    // Lendo do arquivo binário
    ifstream inputFile("menor.bin", ios::binary);
    if (!inputFile) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }
    inputFile.read(reinterpret_cast<char*>(vetor), tam * sizeof(float));
    inputFile.close();

    int pos = 0;
    int resp = menor(vetor, tam, 1, pos);
    cout << vetor[resp] << endl;

    delete[] vetor;
    return 0;
}