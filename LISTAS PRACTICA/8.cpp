#include <iostream>
using namespace std;

int main() {
    string palabras[5], buscar, reemplazar;
    cout << "Ingrese 5 palabras:\n";
    for (int i = 0; i < 5; i++)
        cin >> palabras[i];

    cout << "\nPalabra a buscar: ";
    cin >> buscar;
    cout << "Palabra para reemplazar: ";
    cin >> reemplazar;

    for (int i = 0; i < 5; i++) {
        if (palabras[i] == buscar)
            palabras[i] = reemplazar;
    }

    cout << "\nNueva lista:\n";
    for (int i = 0; i < 5; i++)
        cout << palabras[i] << endl;

    return 0;
}
