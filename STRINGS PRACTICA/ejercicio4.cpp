# include <iostream>
using namespace std;
string removeSpaces(string cadena)
{
    string result = "";
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] != ' ')
        {
            result += cadena[i];
        }   
    }
    return result;
}
int main()
{
    string frase;
    cout << "ingrese una frase" << endl;
    getline(cin, frase);
    cout<< "nueva frase: " << endl;
    frase = removeSpaces(frase);
    cout << frase;
    return 0;
}