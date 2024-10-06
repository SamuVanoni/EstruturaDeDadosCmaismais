#include <iostream>
#include <fstream>
using namespace std;

int fibonacci(int n){
	  if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    string nome;
    cin >> nome;
    ofstream saida(nome);

    int x;
    cin >> x;

    for (int i = 0; i < x; i++) {
        int termo = fibonacci(i);
        if (termo % 2 == 0) {
            saida << termo << " ";
        }
    }

    saida.close();
    return 0;
}