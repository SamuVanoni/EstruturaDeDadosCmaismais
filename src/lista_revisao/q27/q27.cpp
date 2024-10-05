#include <iostream>
using namespace std;

struct Altetas{
    float tempo[8];
};

int main(){
    Altetas* atleta = new Altetas[1];
    float countMin = 1000;
    for(int i = 0; i < 8; i++){
        cin >> atleta[0].tempo[i];
        if(countMin > atleta[0].tempo[i])
            countMin = atleta[0].tempo[i];
    }

    Altetas* aux = new Altetas[1];
    for(int i = 0; i < 8; i++){
        if(atleta[0].tempo[i] != countMin){
            aux[0].tempo[i] = atleta[0].tempo[i] - countMin;
        }else{
            aux[0].tempo[i] = countMin;
        }
    }

    for(int i = 0; i < 8; i++){
        cout << aux[0].tempo[i] << endl;
    }

    return 0;
}