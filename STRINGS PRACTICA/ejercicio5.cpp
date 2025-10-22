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

int main ()
{
    string frase;
    cout << "ingrese una frase" << endl;
    getline(cin, frase); 
    
    cout << "frase volteada: " << endl;

    string frase_volteada = voltear(frase);
    
    cout << frase_volteada << endl;
    
    return 0; 
}