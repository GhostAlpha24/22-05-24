#include <iostream>
using namespace std;
int main () 
{

    int numero[100];
    int suma = 0;
    for(int i = 0; i < 101; i++)
    {
        numero[i] = i+1;
        suma = suma + numero[i];
    }
    cout << "Suma es: " << suma;
    return 0;
}
