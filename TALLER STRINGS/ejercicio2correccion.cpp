#include <iostream>
using namespace std;
string removeSpaces(string word)
{
    string sinEspacios = "";
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != ' ')
        {
            sinEspacios += word[i];  
        }
        
    }
    return sinEspacios;
    
}

void invertLetters()
{
    string word;
    cout << "Ingrese una palabra o frase: " << endl;
    getline(cin, word);
    word = removeSpaces(word);

    int rest32 = 'a' - 'A'; 

    for (int i = 0; i < word.size(); i++)
    {
        if (i % 2 == 0 && word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = word[i] + rest32;
        }
        else if (i % 2 != 0 && word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - rest32;
        }
    }

    cout << "Resultado: " << word << endl;
}

int main()
{
    invertLetters();
    return 0;
}
