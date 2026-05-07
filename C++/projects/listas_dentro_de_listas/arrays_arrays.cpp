#include <iostream>

// Matrices
// Formas de asignar una matriz;
    // 1.
// int matriz[2] [3] = {{0,1,2},{3,4,5}; int contador = 0;
    // 2.
// matriz[0][0] = 0; matriz[0][1]=1; matriz[0][2]=2;
// matriz[1][0] = 3; matriz[1][1]=4; matriz[1][2]=5;
    // 3.
// Asignación automatica .-. 
int main (int argc,char** argv) {
    int matriz[2] [3] = {0}; int contador = 0;
    for (int fila = 0;fila<2;fila++) {
        for (int columna = 0; columna <3;columna++) {
            // Si la variable a asignar se le coloca "++variable" se suma y se asigna;
            // Si la variable a asignar se le coloca "variable++" se asigna y luego se suma;
            matriz [fila] [columna] = ++contador;
            // Cargar al ejecutar el programa
            // std::cin >> matriz [fila] [columna];
            std::cout << matriz [fila] [columna] << " ";
        }
            std::cout << std::endl;
    }
    return 0;
}