
#include <iostream>
using namespace std;
void countVowelsAndConsonants()
{
    string text = "Hola mundo";
    int vowelsCount = 0;
    int consonantsCount = 0;

    for (int i = 0; i < text.length(); i++) 
    {
        if(text[i] == 'a'  || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' ||
           text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
        {
            vowelsCount++;
        }
        else if (text[i] != 'a' && text[i] != 'e' &&text[i] != 'i' && text[i] != 'o' && text[i] != 'u'&&
           text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U' && text[i] != ' ')
        {
            consonantsCount++;
        }
    }
    cout << "Texto original: " << text << endl;
    cout << "Cantidad de vocales: " << vowelsCount << endl;
    cout << "Cantidad de consonantes: " <<  consonantsCount << endl;
}
int main()
{
    countVowelsAndConsonants();
    return 0;
}