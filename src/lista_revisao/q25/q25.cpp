#include <iostream>
using namespace std;

struct Alunos{
    string nome;
    float media;
    int faltas;
};

int main(){
    int x;
    cin >> x;
    Alunos* alunos = new Alunos[x];

    for(int i = 0; i < x; i++){
        cin >> alunos[i].nome >> alunos[i].media >> alunos[i].faltas;
    }

    for (int i = 0; i < x - 1; i++) { // Bubble sort
        for (int j = 0; j < x - 1 - i; j++) {
            if (alunos[j].media < alunos[j + 1].media) {
                Alunos aux = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = aux;
            }
        }
    }

    for(int i = 0; i < x; i++){
        cout << alunos[i].nome << endl;
    }

    delete[] alunos;
    return 0;
}