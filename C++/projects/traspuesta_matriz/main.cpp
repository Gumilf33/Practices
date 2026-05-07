#include <iostream>
using namespace std;

int mat[5][5]={0};
void imprimir_matriz()
{    for (int f=0;f<5;f++){
        for (int c = 1; c < 5; c++)
        {cout << mat[f][c] << " ";} cout << endl;} cout << endl;
}

void cargar_matriz() 
{   for (int f=0;f<5;f++){
        for (int c = 1; c < 5; c++)
        {mat[f][c]= f*c;}  
    }
}

void traspuesta_matriz() 
{   int temporal [5][5] = {0};
    for (int f=0;f<5;f++){
        for (int c = 1; c < 5; c++)
        {
        mat[f][c]= mat[c][f] ;
    }  
    }

}

// int main(int argc, char** argv[])
// {
//     cargar_matriz();
//     imprimir_matriz();
//     return 0;
// }
