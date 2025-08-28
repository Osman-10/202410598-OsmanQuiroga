#include <iostream>
using namespace std;

int main() {
    int numeroAdivinar, intento;

    cout << "Jugador 1, ingresa el numero a adivinar: ";
    cin >> numeroAdivinar;

    cout << "Jugador 2, ¡intenta adivinar el numero!" << endl;
    cout << "Ingresa tu intento: ";
    cin >> intento;

    while (intento != numeroAdivinar) {
        if (intento < numeroAdivinar) {
            cout << "El numero es mayor." << endl;
        } else if (intento > numeroAdivinar) {
            cout << "El numero es menor." << endl;
        }
        cout << "Ingresa tu intento: ";
        cin >> intento;
    }

    cout << "¡Felicidades! Adivinaste el numero." << endl;
    return 0;
}
