#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int vet[100];
    int count = 0;

    ifstream entrada("entrada.txt");
    if (!entrada.is_open()) {
        cout << "Erro ao abrir o arquivo de entrada!" << endl;
        return 1;
    }

    int valor;
    while(entrada >> valor){
        vet[count] = valor;
        count++;
    }
    entrada.close();

    ofstream saida("saida.txt");
    for(int i = count-1; i >= 0; i--){
        saida << vet[i] << " ";
    }
    saida.close();

    return 0;
}