/*Ejercicio 1: Contar caracteres de un texto (sin espacios)
Crea un programa que reciba un string y cuente cuántos caracteres tiene, ignorando los espacios.
Muestra el texto original, la cantidad total de caracteres y la cantidad sin espacios.
Ejemplo:
string palabra = "Programacion en C++";*/
#include <iostream>
using namespace std;
void countChar()
{
    string word = "Algoritmos y programacion en C++";
    int totalChar = word.length();
    int charSinSpaces = 0;

    for (int i = 0; i < totalChar; i++) {
        if (word[i] != ' ') 
        {
            charSinSpaces++;
        }
    }

    cout << "Texto original: " << word << endl;
    cout << "Cantidad total de caracteres: " << totalChar<< endl;
    cout << "Cantidad de caracteres sin espacios: " << charSinSpaces<< endl;

}
int main()
{
    countChar();
    return 0;
}
    
