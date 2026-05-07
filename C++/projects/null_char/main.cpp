#include <iostream>
#include <string.h>
using namespace std;

char *puntero = NULL;
char cadena [100] = "1234567" ;
int contador =0; 
//char cad; 

/* int main(int argc, char const *argv[]) 
{
    while (cadena[contador]!=0) {contador++;}
    cout << "Cantidad de caracterres : " << contador << endl;
    return 0;
}
 */

/*  int main(int argc, char const *argv[])
 {
    cad = cadena [contador];
    while ( cad!=0) {contador++;cad = cadena[contador];}
    cout << "Cantidad de Caracteres: " << contador << endl;
    return 0;
 }
 */ 

 int main(int argc, char const *argv[])
 {
    puntero = &cadena[0];
    while(*puntero++) {contador++;}
    cout <<"Cantidad de Caracteres:" << contador << endl;
    return 0;
 }
 