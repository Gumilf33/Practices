#include <iostream>

using namespace std;

int main() {
    int n=10;
    int v1[n],v2[n],v3[n+n];

    for (int i=0;i<n;i++) {
        v1[i] = i+1;
        v2[i] = i+11;
    }
    for (int i=0;i<n;i++) {
        v3[i] = v1[i];
        v3[i+n] = v2[i];
    }

    cout << "v1 = ";
    for(int i=0;i<n;i++) {
        cout << v1[i] << " "; 
    }
    cout << endl;

    cout << "v2 = ";
    for(int i=0;i<n;i++) {
        cout << v2[i] << " "; 
    }
    cout << endl;

    cout << "v3 = ";
    for(int i=0;i<20;i++) {
        cout << v3[i] << " "; 
    }
    cout << endl;

    return 0;
}