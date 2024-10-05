#include <iostream>
using namespace std;

struct Hidrocarboneto{
    int C, H;
};

int main(){
    Hidrocarboneto* hidrocarboneto = new Hidrocarboneto[1];
    cin >> hidrocarboneto[0].C >> hidrocarboneto[0].H;

    int soma = 0;
    soma += hidrocarboneto[0].C * 12 + hidrocarboneto[0].H * 1;
    cout << soma << endl;

    return 0;
}