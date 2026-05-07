#include <iostream>
using namespace std;

int main() {
    int num;
    //leemos el número 
    cout << "Ingrese un numero:"; cin >> num;
    
    // if uses
    if (num > 100 && num < 150)
        {cout <<"El numero esta entre 100 y 150."<<endl;}
    if (num >= -100 && num <= 100)
        {cout <<"El numero esta entre -100 y 100."<<endl;}
    if (num % 2 == 0)
        {cout <<"El numero es par."<<endl;}
        else
        {cout <<"El numero es impar." <<endl;}
    if (num >= 0)
        {cout <<"El numero es positivo." << endl;}
        else
        {cout <<"El numero es negativo." << endl;}
    if (num % 4 == 0)
        {cout <<"El numero es multiplo de 4." << endl;}
        else
        {cout <<"El numero no es multiplo de 4." << endl;}
    if (num >= 35 && num <= 100)
        {cout <<"El numero esta entre 35 y 100." << endl;}
    if (num < 50 || num > 60)
        {cout <<"El numero es menor que 50 o mayor que 60." <<endl;}

    return 0;
}