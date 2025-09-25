#include <iostream>
using namespace std;

bool esPalindromo(string palabra) {
    for (int i = 0; i < palabra.size() / 2; i++) {
        if (palabra[i] != palabra[palabra.size() - 1 - i]) {
            return false; // si alguna letra no coincide
        }
    }
    return true;
}

int main() {
    string word1, word2;
    cout << "Ingrese dos palabras para saber si son palindromas: " << endl;
    cin >> word1 >> word2;

    if (esPalindromo(word1))
        cout << word1 << " es palindroma." << endl;
    else
        cout << word1 << " no es palindroma." << endl;

    if (esPalindromo(word2))
        cout << word2 << " es palindroma." << endl;
    else
        cout << word2 << " no es palindroma." << endl;

    return 0;
}
