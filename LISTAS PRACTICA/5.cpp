#include <iostream>
using namespace std;

int main() {
    string palabras[5];
    cout << "Ingrese 5 palabras:\n";
    for (int i = 0; i < 5; i++)
        cin >> palabras[i];

    cout << "\nPalabras con más de 5 letras:\n";
    for (int i = 0; i < 5; i++) {
        if (palabras[i].length() > 5)
            cout << palabras[i] << endl;
    }

    return 0;
}
