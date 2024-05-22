#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    string nombre;    // Variable para almacenar el nombre del usuario
    float notas[6];   // Array para almacenar las 6 notas
    float suma = 0;   // Variable para almacenar la suma de las notas
    float promedio;   // Variable para almacenar el promedio

    // Solicitar el nombre del usuario
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    // Solicitar las 6 notas al usuario
    for (int i = 0; i < 6; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i]; // Acumular la suma de las notas
    }

    // Calcular el promedio
    promedio = suma / 6;

    // Mostrar el nombre del usuario y el promedio en pantalla
    cout << "Hola " << nombre << ", el promedio de tus notas es: " << promedio << endl;

    return 0;
}
