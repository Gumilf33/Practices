#include <iostream>

using namespace std;

//declarar la función
int potencia(int base,int exponente);

//main
int main() {
    int base=0, exponente=0;

    cout << "Calculadore de potencia"<<endl;
    cout << "Cual es la base: "; cin >> base;
    cout << "Cual es el exponente: "; cin >> exponente;

    cout << "La potencia de base " << base << " y exponente " << exponente << " es ";
    cout << potencia(base,exponente) << endl;
    return 0;
}

// Definición de función
int potencia(int base,int exponente) {
    int resultado = 1;
    for (int i=0;i<exponente;i++) {
        resultado = resultado * base;
    } 
    return resultado;
}