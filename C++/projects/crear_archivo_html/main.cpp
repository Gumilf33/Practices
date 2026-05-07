#include <fstream> // Para ofstream
#include <iostream> // Para cout

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream archivo("miweb.html");
    if (!archivo){
        cout << "Error al Crear\n";
        exit(EXIT_FAILURE);
    }
    archivo << "<html><body>Miweb</html></body>";
    archivo.close();
    return 0;
}
