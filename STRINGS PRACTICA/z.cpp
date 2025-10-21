# include <iostream>
using namespace std;

int main(){
    string frase;
    cout << "escriba una frase: "<< endl;
    getline(cin,frase);
    cout << "la frase es: " << frase << endl;
    cout << "la frase alterada es: ";
    
    for (int i = 0; i < frase.size(); i++)
    {
        if (isupper(frase[i]))
        {
            cout << (char)tolower(frase[i]);
        }
        else if (islower(frase[i]))
        {
            cout << (char)toupper(frase[i]);
        }
        else 
        {
            cout << frase[i];
        }
        
    }
    return 0;
}