# include <iostream>
using namespace std;
string sinEspacios(string word)
{
    string sin = "";
    for (int i = 0; i < (int)word.size(); i++)
    {
        if (word[i] != ' ')
        {
            sin += word[i];
        }
        
    }
    return sin;
    
}
