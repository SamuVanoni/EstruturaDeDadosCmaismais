#include <iostream>
#include <string>
using namespace std;

struct Familias {
    string nome;
    int idade[3];
};

void redimensiona(Familias*& familia, int& tamanho) {
    tamanho += 3;
    cout << tamanho << endl;
    Familias *aux = new Familias[tamanho];
    for (int i = 0; i < tamanho - 3; i++) {
        aux[i] = familia[i];
    }
    delete[] familia;
    familia = aux;
}

int main() {
    int tamanho = 3;
    Familias *familia = new Familias[tamanho];

    string sobrenome;
    cin >> sobrenome;

    int count = 0;
    while (sobrenome != "FIM") {
        if (count % 3 == 0 && count != 0)
            redimensiona(familia, tamanho);

        familia[count].nome = sobrenome;
        for (int i = 0; i < 3; i++) {
            cin >> familia[count].idade[i];
        }
        count++;
        cin >> sobrenome;
    }

    string* vetor = new string[count + count]; // Só p ter uma margem grande
    int repostasQttd = 0;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i+1; j < count; j++) {
            if(familia[i].idade[2] == familia[j].idade[2]){
                vetor[repostasQttd] = familia[i].nome;
                repostasQttd++;
                vetor[repostasQttd] = familia[j].nome;
                repostasQttd++;
            }
        }
    }

    // Retirando as repetições
    for (int i = 0; i < repostasQttd - 1; i++) {
        for (int j = i+1; j < repostasQttd; j++) {
            if(vetor[i] == vetor[j]){
                vetor[j] = "-1";
            }
        }
    }

    // Impressão
    for (int i = 0; i < repostasQttd; i++) {
        if(vetor[i] != "-1")
            cout << vetor[i] << endl;
    }
    if(repostasQttd == 0)
        cout << "NENHUM" << endl;

    delete[] familia;
    delete[] vetor;
    return 0;
}
