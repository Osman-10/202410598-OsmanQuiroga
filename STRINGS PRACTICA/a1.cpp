#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Cuantos elementos desea ingresar en cada lista? "<< endl;
    cin >> n;

    // ==== LISTAS DE DIFERENTES TIPOS ====
    int edades[n];
    float precios[n];
    char iniciales[n];
    string nombres[n];

    cout << " INGRESE LOS DATOS " << endl;

    for (int i = 0; i < n; i++) 
    {
        cout << " Elemento " << i + 1 << ":" << endl;

        cout << "Nombre: ";
        cin >> nombres[i];

        cout << "Edad: ";
        cin >> edades[i];

        cout << "Precio: ";
        cin >> precios[i];

        cout << "Inicial del nombre: ";
        cin >> iniciales[i];
    }

    // ==== MOSTRAR LISTAS COMPLETAS ====
    cout << "\n--- DATOS COMPLETOS ---\n";
    for (int i = 0; i < n; i++) 
    {
        cout << nombres[i] << " | " << edades[i] << " años | $"
             << precios[i] << " | Inicial: " << iniciales[i] << endl;
    }

    // ==== PRIMEROS Y ÚLTIMOS ====
    cout << "\n--- PRIMEROS Y ÚLTIMOS ELEMENTOS ---\n";

    cout << "Primer nombre: " << nombres[0] << endl;
    cout << "Último nombre: " << nombres[n - 1] << endl;

    cout << "Primera edad: " << edades[0] << endl;
    cout << "Última edad: " << edades[n - 1] << endl;

    cout << "Primer precio: $" << precios[0] << endl;
    cout << "Último precio: $" << precios[n - 1] << endl;

    cout << "Primera inicial: " << iniciales[0] << endl;
    cout << "Última inicial: " << iniciales[n - 1] << endl;

    return 0;
}
