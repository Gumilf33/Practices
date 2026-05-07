// unir 2 vectores en un 3ro
// #include <iostream> 

// int main() { 

//     int vector1[4] = {1, 2, 3, 4};  int vector2[4] = {5, 6, 7, 8}; 

//     int vector3[8]=  {0}; int contador = 0; 

//     // Copiar elementos de vector1 a vector3 

//     for (int i = 0; i < 4; i++)  

//     {    vector3[contador] = vector1[i]; contador++; } 

//     // Copiar elementos de vector2 a vector3 

//     for (int i = 0; i < 4; i++)  

//     {vector3[contador] = vector2[i]; contador++;} 

//     // Imprimir el resultado 

//     std::cout << "Vector combinado: "; 

//     for (int i = 0; i < 8; i++) {std::cout << vector3[i] << " ";} 

//      return 0; 

// } 

// Invertir vector 
// #include <iostream> 

// int main() { 

//     int vector[5] = {10, 20, 30, 40, 50}; 

//     int vectorInvertido[5]; 

//     // Copiar elementos en orden inverso 

//     for (int i = 0; i < 5; i++) {vectorInvertido[i] = vector[4 - i];} 

//     // Imprimir el vector original 

//     std::cout << "Vector original: "; 

//     for (int i = 0; i < 5; i++) {std::cout << vector[i] << " ";} 

//     std::cout << std::endl; 

//     // Imprimir el vector invertido 

//     std::cout << "Vector invertido: "; 

//     for (int i = 0; i < 5; i++) { std::cout << vectorInvertido[i] << " ";} 

//     return 0; 

// } 



// Invertir un vector en sí mismo. 
// #include <iostream> 

// void intercambiar(int &a, int &b)  

// { int auxiliar = a; a = b; b = auxiliar; } 

// int main() { 

//     int vector[5] = {10, 20, 30, 40, 50};   int n = 5; 

//     // Intercambiar los elementos del vector 

//     for (int i = 0, j = n - 1; i < j; i++, j--) {intercambiar(vector[i], vector[j]); } 

//     std::cout << "Vector invertido: "; 

//     for (int i = 0; i < n; i++) { std::cout << vector[i] << " ";} 

//     return 0; 

// }


// // Ordenamiento por el método de burbuja (Bubble Sort) usando intercambiar variables. 
// #include <iostream> 
// using namespace std; 
// int main() { 
//     int vector[10] = {50, 20, 60, 10, 80, 30, 90, 70, 40, 100}; 

//     for(int i = 0; i < 9; i++) { // El bucle exterior recorre el vector 
//         for(int j = 0; j < 9 - i; j++) { // El bucle interior hace las comparaciones 
//             if(vector[j] > vector[j + 1]) { // Si elemento actual > que el siguiente, lo intercambiamos 
//                 int temp = vector[j];    // Guardamos el valor de vector[j] en una variable temporal 

//                 vector[j] = vector[j + 1];  // Asignamos el valor de vector[j + 1] a vector[j] 

//                 vector[j + 1] = temp;    // Asignamos el valor guardado en temp a vector[j + 1] 

//             } 

//         } 

//     } 

//     // Mostrar el vector ordenado 
//     cout << "Vector ordenado: "; 
//     for(int i = 0; i < 10; i++) { 

//         cout << vector[i] << " "; 

//     } 
//     cout << endl; 
//     return 0; 
// } 

