#include <iostream>
using namespace std;

int main() {
    //Definir las variables
    int tamano = 10, notas[tamano];
    int max_notas = 0, min_notas = 999;
    int num_notas_menores_50 = 0, num_notas_mayores_50 = 0;


    for (int i=0; i<tamano;i++) {
        cout << "Ingrese la nota del alumno" << i+1 <<":"; cin >> notas[i];
        if (notas[i]>max_notas) {max_notas = notas[i];}
        if (notas[i]<min_notas) {min_notas = notas[i];}
        if (notas[i]<=50) {num_notas_menores_50++;} else {num_notas_mayores_50++;}
    }

    cout << "La nota con mayor puntaje es: " << max_notas << endl;
    cout << "La nota con menor puntaje es: " << min_notas << endl;
    cout << "numero de alumnos con notas menores o iguales a 50: " << num_notas_menores_50 << endl;
    cout << "numero de alumnos con notas mayores a 50 es: " << num_notas_mayores_50 << endl;

    return 0;
}