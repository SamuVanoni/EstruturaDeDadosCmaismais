#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string palavras[50];
    int numeros[50];
    int countPalavras = 0;
    int countNumeros = 0;

    ifstream entrada1("palavras.txt");
    if (!entrada1) {
        cout << "Erro na abertura do arquivo palavras.txt!";
        return 1;
    }

    while (entrada1 >> palavras[countPalavras] ) {
        countPalavras++;
    }
    entrada1.close();

    ifstream entrada2("numeros.txt");
    if (!entrada2) {
        cout << "Erro na abertura do arquivo numeros.txt!";
        return 1;
    }

    while (entrada2 >> numeros[countNumeros]) {
        countNumeros++;
    }
    entrada2.close();

    ofstream saida("frase.txt");
    for(int i = 0; i < countNumeros; i++){
        saida << palavras[numeros[i] - 1];
        if(i != countNumeros - 1)
            saida << " ";
    }
    saida.close();

    return 0;
}
