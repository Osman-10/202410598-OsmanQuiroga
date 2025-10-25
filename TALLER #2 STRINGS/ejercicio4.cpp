
# include <iostream>
using namespace std;
int contarPalabras(string frase)
{
    int counterWords = 1;
    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] == ' ')
        {
            counterWords++;
        }
    }
    return counterWords;
}
int contarPuntuacion(string frase)
{
    int counterPoint = 0;
    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i] == '.' || frase[i] == ',' || frase[i] == ';' || frase[i] == ':')
        {
            counterPoint++;
        }
    }
    return counterPoint;
}
bool terminaEnPunto(string frase)
{
    if (frase[frase.size() - 1] == '.')
    {
        return true;
    }
    return false;
}
void eassessPhrase()
{
    string frase;
    cout << "Ingrese una frase: " << endl;
    getline(cin, frase);

    int words = contarPalabras(frase);
    cout << "La frase tiene " << words << " palabras " << endl;

    int points = contarPuntuacion(frase);
    cout << "La frase tiene " << points << " signos de puntuación " << endl;

    if (terminaEnPunto(frase))
    {
        cout << "La frase termina con un punto " <<  endl;
    }
    else
    {
        cout << "La frase no termina con un punto" << endl;
    }
}

int main()
{
    eassessPhrase();
    return 0;
}