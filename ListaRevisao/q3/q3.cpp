#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    string vetor1[x];
    for(int i = 0; i < x; i++){
        cin >> vetor1[i];
    }

    int y;
    cin >> y;
    string vetor2[y];
    for(int i = 0; i < y; i++){
        cin >> vetor2[i];
    }

    int z;
    cin >> z;
    string vetor3[z];
    for(int i = 0; i < z; i++){
        cin >> vetor3[i];
    }

    int vetor[z];
    for(int i = 0; i < z; i++){
        int count = 0;
        for(int j = 0; j < x; j++){
            if(vetor3[i] == vetor1[j])
                count++;
        }
        for(int j = 0; j < y; j++){
            if(vetor3[i] == vetor2[j])
                count++;
        }
        vetor[i] = count;
    }

    for(int i = 0; i < z; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}