#include <iostream>
using namespace std;

int main() {
    string frutas[5] = {"Manzana", "Pera", "Banano", "Uva", "Mango"};

    cout << "Lista de frutas:\n";
    for (int i = 0; i < 5; i++)
        cout << frutas[i] << endl;

    cout << "\nPrimera: " << frutas[0] << endl;
    cout << "Ultima: " << frutas[4] << endl;

    frutas[4] = "Fresa"; // cambiar la segunda fruta
    cout << "\nNueva lista:\n";
    for (int i = 0; i < 5; i++)
        cout << frutas[i] << endl;

    return 0;
}
