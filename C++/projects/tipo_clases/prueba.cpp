#include <iostream>
#include <string>

using namespace std;
//Definir clases;
class Personas 
{  

    private:
    int cedula;
    int salario;
    public:
    void get_cedula(int valor){cedula=valor;}
    void get_salario(int valor){salario=valor;}

    int get_cedula(){return cedula;}
    int get_salario(){return salario;}
    

};

int main(int argc, char const *argv[])
{
    Personas juan;
    Personas luis;

    juan.get_cedula(123456); juan.get_salario(10000);
    luis.get_cedula(123456); luis.get_salario(2000);
        

    cout << juan.get_cedula() << " " << juan.get_salario() << endl;
    cout << luis.get_cedula() << " " << luis.get_salario() << endl;
    return 0;
}

