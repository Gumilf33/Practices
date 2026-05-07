#include <iostream>
using namespace std;

int main() {
    int num_ingresado = 0;
    int num_resultado = 1;

    while (true) {
        cout << "Ingrese un numero positivo porfavor"; cin >> num_ingresado;
        if (num_ingresado>=0){
            break;
        }
    }

    for (int i=1; i<=num_ingresado; i++) {
        num_resultado *=i;
    }

    cout << "El resultado del factorial" << num_ingresado << "! es:" << num_resultado << endl; 
    if (num_ingresado!=0) {
        cout << "El resultado de dividir el reusltado y el numero proporcionado es: " << num_resultado/num_ingresado << endl;
    } else {cout <<"No se puede dividir por 0" << endl;}
    
    return 0;
}
