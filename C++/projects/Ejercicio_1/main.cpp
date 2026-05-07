#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int H[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int P[3] = {10,21,41};

    for (int i = 0; i < 3; i++)
    {   
        int suma=0;
        for (int j = 0; j < 3; j++)
        {   
            if (H[i][j]%2==0)
            {
                suma = H[i][j]+P[i];
            }
        }
        
        if (suma%2==0)
        {
            P[i]= P[i] + suma;
        }
        suma = 0;
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << P[i] << " "; 
    }

    return 0;
}
