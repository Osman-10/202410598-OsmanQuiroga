#include <iostream>
using namespace std;

int main() {
    string nombres[5];
    float notas[5], suma = 0;

    cout << "Ingrese los nombres y notas:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Nota: ";
        cin >> notas[i];
        suma += notas[i];
    }

    float promedio = suma / 5;
    cout << "\nPromedio general: " << promedio << endl;

    cout << "Estudiantes por encima del promedio:\n";
    for (int i = 0; i < 5; i++) {
        if (notas[i] > promedio)
            cout << nombres[i] << " (" << notas[i] << ")\n";
    }

    return 0;
}
