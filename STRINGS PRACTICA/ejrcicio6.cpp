#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "=== Nivel 4: Ejercicios con strings ===" << endl;
    cout << "1. Quitar letras repetidas" << endl;
    cout << "2. Comparar dos palabras (ignorando mayusculas/minusculas)" << endl;
    cout << "3. Contar frecuencia de letras (a-z)" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;
    cin.ignore();

    // --- EJERCICIO 1 ---
    if (opcion == 1) {
        string palabra, resultado = "";
        cout << "Ingrese una palabra: ";
        getline(cin, palabra);

        for (int i = 0; i < palabra.size(); i++) 
        {
            bool repetida = false;
            for (int j = 0; j < resultado.size(); j++) 
            {
                if (palabra[i] == resultado[j]) 
                {
                    repetida = true;
                }
            }
            if (!repetida) 
            {
                resultado += palabra[i];
            }
        }

        cout << "Sin repetidas: " << resultado << endl;
    }

    // --- EJERCICIO 2 ---
        if (opcion == 2) 
        {
        string a, b;
        cout << "Ingrese la primera palabra: ";
        getline(cin, a);
        cout << "Ingrese la segunda palabra: ";
        getline(cin, b);

        if (a.size() != b.size()) {
            cout << "No son iguales." << endl;
            return 0;
        }

        bool iguales = true;
        for (int i = 0; i < a.size(); i++) {
            char ca = a[i];
            char cb = b[i];

            // convertir mayúsculas a minúsculas manualmente
            if (ca >= 'A' && ca <= 'Z') ca = ca + 32;
            if (cb >= 'A' && cb <= 'Z') cb = cb + 32;

            if (ca != cb) {
                iguales = false;
            }
        }

        if (iguales)
            cout << "Son iguales (ignorando mayusculas)." << endl;
        else
            cout << "No son iguales." << endl;
    }

    // --- EJERCICIO 3 ---
    else if (opcion == 3) {
        string palabra;
        cout << "Ingrese una palabra: ";
        getline(cin, palabra);

        // arreglo para contar (26 letras)
        int contador[26];
        for (int i = 0; i < 26; i++) 
        {
            contador[i] = 0;
        }

        for (int i = 0; i < palabra.size(); i++) {
            char c = palabra[i];

            // pasar mayúscula a minúscula
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }

            // contar solo letras
            if (c >= 'a' && c <= 'z') {
                int pos = c - 'a';
                contador[pos]++;
            }
        }

        cout << "\nFrecuencia de letras:\n";
        for (int i = 0; i < 26; i++) {
            if (contador[i] > 0) {
                char letra = 'a' + i;
                cout << letra << " = " << contador[i] << endl;
            }
        }
    }

    else {
        cout << "Opcion invalida.";
    }

    return 0;
}
