#include <iostream>

using namespace std;

int main() {

    int v1[5] = {10,20,30,40,50};
    int v2[5] = {15,25,35,45,55};
    int v3[10] = {0};
    

    for (int i=0; i<5;i++) {
        v3[i] = v1[i];
        v3[1+i]= v2[i];
    }


    for (int i=0; i<10;i++) {
        cout << v3[i] << "  ";
    }


    for (int i=0;i<9;i++) {
        for(int j=0;j<9-i;j++) {
          if(v3[j]>v3[j+1]) {
            int temp = v3[j];
            v3[j] = v3[j+1];
            v3[j+1] = temp;
          }  
        }
    }


    for (int i=0; i<10;i++) {
        cout << v3[i] << "  ";
    }

    return 0;
}
