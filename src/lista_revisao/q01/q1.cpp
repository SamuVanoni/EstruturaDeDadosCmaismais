#include <iostream>
using namespace std;

bool primos(int num){
    for(int count = 2; count < num; count++){
        if(num % count == 0)
            return false;
    }
    return true;
}

int main(){
    int vet[9];
    for(int i = 0; i < 9; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < 9; i++){
        bool sentinel = primos(vet[i]);
        if(sentinel)
            cout << vet[i] << " " << i << endl;
    }

    return 0;
}