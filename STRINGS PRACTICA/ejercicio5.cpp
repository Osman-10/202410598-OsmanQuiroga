#include <iostream>
using namespace std;
string voltear(string frase)
{
    string frase_invertida = "";
    for (int i = frase.size() - 1; i >= 0; i--)
    {
        frase_invertida += frase[i];
    }

    return frase_invertida;
}
void esPalindromo(string frase)
{
    cout << "Ingrese una frase: " << endl;
    getline (cin, frase);
    

    string frase_invertida = voltear(frase);
    if (frase == frase_invertida)
    {
        cout << "Es palindromo" << endl;
    }
    else
    {
        cout << "No es palindromo" << endl;
    }
}

int main ()
{
    string frase;
    esPalindromo(frase);
    return 0; 
}