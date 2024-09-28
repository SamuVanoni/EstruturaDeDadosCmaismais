#include <iostream>
using namespace std;

string *geraVetor(int &n){
    string *V =  new string[n];
    return V;
}

int main(){
    int x;
    cin >> x;
    string *vetor1 = geraVetor(x);
    for(int i = 0; i < x; i++){
        cin >> vetor1[i];
    }

    int y;
    cin >> y;
    string *vetor2 = geraVetor(y);
    for(int i = 0; i < y; i++){
        cin >> vetor2[i];
    }

    int count = 0;

    for(int i = 0; i < x; i++){
        bool sentinel = true;
        for(int j = 0; j < y; j++){
            if(vetor1[i] == vetor2[j]){
                sentinel = false;
                count++;
            }
        }
        if(sentinel)
            cout << vetor1[i] << endl;
    }

    if(count == x)
        cout << "NADA" << endl;

    return 0;
}