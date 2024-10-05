#include <iostream>
#include <cmath>
using namespace std;

struct Figura{
    char letra;
    float parametros[3];
};

int main(){
    Figura *figura = new Figura[5];

    for(int i = 0; i < 5; i++){
        cin >> figura[i].letra;
        switch(figura[i].letra){
            case 'T':
                cin >> figura[i].parametros[2];
            case 'R':
                cin >> figura[i].parametros[1];
            case 'C':
                cin >> figura[i].parametros[0];
                break;
            default:
                cout << "Deu ruim!" << endl;
                break;
        }
    }

    for(int i = 0; i < 5; i++){
        switch(figura[i].letra){
            case 'T': {
                float perimetro = figura[i].parametros[0] + figura[i].parametros[1] + figura[i].parametros[2];
                float sp = perimetro / 2;
                cout << "Triangulo " << perimetro << " " << sqrt(sp * (sp - figura[i].parametros[0]) * (sp - figura[i].parametros[1]) * (sp - figura[i].parametros[2])) << endl;
                break;
            }
            case 'R': {
                cout << "Retangulo " << figura[i].parametros[1] * 2 + figura[i].parametros[0] * 2 << " " << figura[i].parametros[1] * figura[i].parametros[0] << endl;
                break;
            }  
            case 'C': {
                cout << "Circulo " << 2 * M_PI * figura[i].parametros[0] << " " << M_PI * figura[i].parametros[0] * figura[i].parametros[0] << endl;
                break;
            }  
        }
    }

    delete[] figura;
    return 0;
}