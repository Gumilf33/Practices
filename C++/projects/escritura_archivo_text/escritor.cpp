#include <fstream> // Para ofstream
#include <iostream> // Para cout

using namespace std;

int main(int argc, char const *argv[]) {
    
    ofstream archivo ("numeros.txt") ; 
    
    if(! archivo) {
        cout << "Error al Crear Archivo\n";
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 10 ; i++)
    archivo<< i+10 << endl;

    return 0;
}
