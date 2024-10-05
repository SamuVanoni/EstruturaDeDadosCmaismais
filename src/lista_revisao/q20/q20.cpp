#include <iostream>
#include <fstream>
using namespace std;

struct Alunos{
    string nome;
    int matricula;
    string nota;
};

int main(){
    int x;
    cin >> x;

    Alunos* aluno = new Alunos[x];
    for(int i = 0; i < x; i++){
        cin >> aluno[i].nome >> aluno[i].matricula >> aluno[i].nota;
    }

    int a, b;
    cin >> a >> b;

    for(int i = 0; i < x; i++){
        if(aluno[i].matricula == a)
            aluno[i].matricula = b;
    }

    for (int i = 0; i < x - 1; i++) { // Bubble sort
        for (int j = 0; j < x - 1 - i; j++) {
            if (aluno[j].matricula > aluno[j + 1].matricula) {
                Alunos aux = aluno[j];
                aluno[j] = aluno[j + 1];
                aluno[j + 1] = aux;
            }
        }
    }

    for(int i = 0; i < x; i++){
        cout << aluno[i].nome << " " << aluno[i].nota << endl;
    }

    delete[] aluno;
    return 0;
}