#include <iostream>
using namespace std;

bool esPalindromo(string palabra) {
    int n = palabra.length();
    for (int i = 0; i < n / 2; i++) {
        if (palabra[i] != palabra[n - 1 - i])
            return false;
    }
    return true;
}

int main() {
    string palabras[5];
    cout << "Ingrese 5 palabras:\n";
    for (int i = 0; i < 5; i++)
        cin >> palabras[i];

    cout << "\nPalíndromos encontrados:\n";
    for (int i = 0; i < 5; i++) {
        if (esPalindromo(palabras[i]))
            cout << palabras[i] << endl;
    }

    return 0;
}
