#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {    
    int n=5;
    int m=30;
    int notas[m];
    int frecuencia[n];
    int nota_max = 0, nota_min = 999;

    //El rand() genera dependiendo de la semilla al colocar esto la semilla con la que usa rand usa la hora actual para usarlo como semilla
    //sin esto genera los mismos resultados todo el tiempo
    srand(static_cast<unsigned int>(time(0)));
    for (int i=0; i<n;i++){
        frecuencia[i] = 0;
    }


    cout <<"Notas de los " << m << " alumnos:\n";
    for (int i=0; i<m; i++) {
        int nota=rand()%n+1;
        cout << nota << " ";
        frecuencia[nota-1]++;
    }
    cout << endl << "Frecuencia de las notas: \n";
    for (int i=0;i<n;i++) {
        cout << "nota " << i+1 << " tiene frecuencia: " << frecuencia[i] << endl;
        
        if (frecuencia[i] > nota_max) {nota_max = frecuencia[i];}
        if (frecuencia[i] < nota_min) {nota_min = frecuencia[i];}
    }

    cout << "Mayor frecuencia:" << nota_max << "\n";
    cout << "Menor frecuencia: " << nota_min << "\n";
    
    return 0;
}