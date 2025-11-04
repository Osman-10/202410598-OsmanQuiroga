#include <iostream>
using namespace std;

int main() {
    string nombres[6], buscado;
    cout << "Ingrese 6 nombres:\n";
    for (int i = 0; i < 6; i++)
        cin >> nombres[i];

    cout << "\nIngrese un nombre a buscar: ";
    cin >> buscado;

    bool encontrado = false;
    for (int i = 0; i < 6; i++) {
        if (nombres[i] == buscado)
            encontrado = true;
    }

    if (encontrado)
        cout << buscado << " está en la lista.\n";
    else
        cout << buscado << " no se encuentra.\n";

    return 0;
}

