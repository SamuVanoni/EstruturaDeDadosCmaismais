#include <iostream>
using namespace std;

struct Corredores{
    int cod, idade, peso;
    string nome;
    char sexo;
};

struct Treinos{
    int dia, codAtleta, tempo;
    float distancia;
};

int main(){
    int x;
    cin >> x;

    Corredores* corredor = new Corredores[x];

    int pos = -1;
    int countMax = -1;
    for(int i = 0; i < x; i++){
        cin >> corredor[i].cod >> corredor[i].nome >> corredor[i].idade >> corredor[i].peso >> corredor[i].sexo;
        if(corredor[i].sexo == 'M' and corredor[i].idade > countMax){
            countMax = corredor[i].idade;
            pos = i;
        }
    }
    // Print se n tiver 'M'
    if(pos == -1)
        cout << pos << endl;

    Treinos* treino = new Treinos[15];
    int count = 0;
    float soma = 0;

    int y;
    cin >> y;
    while(y != -1){
        treino[count].dia = y;
        cin >> treino[count].codAtleta >> treino[count].distancia >> treino[count].tempo;

        if(treino[count].codAtleta == corredor[pos].cod)
            soma += treino[count].distancia; 

        count++;
        cin >> y;
    }
    // Print do 'M' mais velho e qual a distância total q ele percorreu
    if(pos != -1)
        cout << corredor[pos].nome << " " << soma << endl;


    // Print do NOME - IDADE do atleta q mais participou dos treinos
    int contMax = 0;
    int posicaoPrint = -1;
    for(int i = 0; i < x; i++){
        int contador = 0;

        for(int j = 0; j < count; j++){
            if(corredor[i].cod == treino[j].codAtleta){
                contador++;
            }
        }
        if(contMax < contador){
            contMax = contador;
            posicaoPrint = i;
        }
    }
    cout << corredor[posicaoPrint].nome << " " << corredor[posicaoPrint].idade << endl;

    // Print das médias NOME - TEMPO
    for(int i = 0; i < x; i++){
        float media = 0;
        int contador = 0;

        for(int j = 0; j < count; j++){
            if(corredor[i].cod == treino[j].codAtleta){
                media += treino[j].tempo;
                contador++;
            }
        }
        cout << corredor[i].nome << " " << media / contador << endl;
    }

    delete[] corredor;
    delete[] treino;
    return 0;
}