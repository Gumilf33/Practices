#include <fstream> // Para ofstream
#include <iostream> // Para cout

using namespace std;

int main(int argc, char const *argv[]) {
    ifstream archivo ("numeros.txt");
    if(!archivo) {
        cout << "Error al Abrir Archivo \n";
        exit(EXIT_FAILURE);
    }
    string dato;
    while (archivo >> dato) // Mientras tenta datos
        cout << dato << endl; 
    return 0;
}
