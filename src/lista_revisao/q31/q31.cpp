#include <iostream>
#include <fstream>
using namespace std;

void processarNumeros(float* vet, int tam, float*& resultado, int& novoTam) {
    novoTam = (tam + 1) / 2; // Novo tamanho: metade, arredondando para cima
    resultado = new float[novoTam];

    for (int i = 0; i < novoTam; i++) {
        if (i == novoTam - 1 && tam % 2 != 0) {
            // Se é o último e há um número ímpar, mantém inalterado
            resultado[i] = vet[tam - 1];
        } else {
            // Calcula a média dos dois números
            resultado[i] = (vet[i * 2] + vet[i * 2 + 1]) / 2.0;
        }
    }
}

void imprimirInverso(float* resultado, int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        cout << resultado[i] << " ";
    }
    cout << endl;
}

int main() {
    string nome;
    cin >> nome;
    ifstream entrada(nome);

    if (!entrada) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    int tam;
    entrada >> tam;
    float* vet = new float[tam];

    for (int i = 0; i < tam; i++) {
        entrada >> vet[i];
    }
    
    float* resultado;
    int novoTam;
    processarNumeros(vet, tam, resultado, novoTam);

    imprimirInverso(resultado, novoTam);

    delete[] vet;
    delete[] resultado;
    return 0;
}