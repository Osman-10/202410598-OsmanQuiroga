#include <iostream>
using namespace std;

int main() {
    int lista1[4], lista2[4];

    cout << "Ingrese 4 números para la primera lista:\n";
    for (int i = 0; i < 4; i++)
        cin >> lista1[i];

    cout << "Ingrese 4 números para la segunda lista:\n";
    for (int i = 0; i < 4; i++)
        cin >> lista2[i];

    cout << "\nCoincidencias:\n";
    for (int i = 0; i < 4; i++) {
        if (lista1[i] == lista2[i])
            cout << "Posición " << i << ": " << lista1[i] << endl;
    }

    return 0;
}
