#include <iostream>

using namespace std;


// int main (int argc, char** argv) {
//     int N = 3;int m[4][7] = {0};
//     for (int i=0;i<4;i++) {
//         for (int j=i; j<7-i;j++){
//              m[N-i][j] = 1;
//         }
//     }
//     for (int i=0;i<4;i++) {
//         for (int j=0;j<7;j++) {
//             std::cout << m[i][j] << " "; 
//         }
//         std::cout<< std::endl;
//     }
//     return 0;
// }


// int main(int argc, char** argv) {
//     int N = 3; int m[4][7] = {0};
//     for (int j=0;j<7;j++) {
//         m[0][j] = 1; m[3][j] = 1;
//     }
//     for (int i=0;i<4;i++){
//         m[i][0] = 1; m[i][6] = 1;
//     }
//     for (int i=0;i<4;i++) {
//         for (int j=0;j<7;j++) {
//             std::cout << m[i][j] << " "; 
//         }
//         std::cout<< std::endl;
//     }
//     return 0;
// }

// int main(int argc, char** argv) {
//     int N = 3; int m[4][7] = {0};
//     for (int j=0;j<7;j++) {
//         m[0][j] = 1; m[3][j] = 1;
//     }
//     for (int i=0;i<4;i++){
//         m[i][0] = 1; m[i][6] = 1; m[i][i] = 2;
//     }
//     for (int i=0;i<4;i++) {
//         for (int j=0;j<7;j++) {
//             std::cout << m[i][j] << " "; 
//         }
//         std::cout<< std::endl;
//     }
//     return 0;
// }

int main(int argc, char** argv) {
    int producto [2] [2] = { {2,300}, {5,5000}};
    int importe = 0; int importe_total = 0;
    // Hallar el importe total 
    for ( int i= 0; i<2;i++) {
        // Importe = cantidad * precio;
        importe = producto[i][0] * producto[i][1];
        importe_total += importe;
        cout << importe << endl;
    }
    cout << "Total importe " << importe_total;
    return 0;
}