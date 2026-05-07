#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
int proveedores[4][4] = {{1,100,200,300},{2,400,200,400},{3,600,500,400},{4,300,400,400}};
int menor_precio[4] = {0};
for (int i = 0; i < 4; i++)
{
menor_precio[i] = proveedores[i][2];
for (int j = 1; j < 4; j++)
{
if (menor_precio[i] > proveedores[i][j])
{
menor_precio[i] = proveedores[i][j];
}
}
}
int suma = 0;
cout << "Codigo Prod Menor Costo" << endl;
for (int i = 0; i < 4; i++)
{ suma = menor_precio[i]+suma;
cout << i << " " << menor_precio[i]<<endl;
}
cout << "Costo Total: " << suma;
return 0;
}