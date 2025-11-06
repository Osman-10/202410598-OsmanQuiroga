#include <iostream>
#include <string>
using namespace std;

void palabraMasLarga() {
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    string palabra = "";
    string palabraMasLarga = "";

    for (int i = 0; i < frase.size(); i++) 
    {
        if (frase[i] != ' ') 
        {
            palabra += frase[i]; 
        }
        if (frase[i + 1] == ' ' || i + 1 == frase.size()) 
        {
            if (palabra.size() > palabraMasLarga.size()) 
            {
                palabraMasLarga = palabra; 
            }
            palabra = ""; 
        }
    }

    cout << "La palabra mas larga es: " << palabraMasLarga << endl;
}

int main() {
    palabraMasLarga();
    return 0;
}


