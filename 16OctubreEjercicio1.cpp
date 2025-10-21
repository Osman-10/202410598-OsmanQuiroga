# include <iostream>
using namespace std;
bool longitudMinima(string pasword)
{
    if (pasword.length() < 8)
    {
        return false;
    }
    return true;
}
bool minChar(string pasword)
{
    int rest = '!' - '/';

}
    for (int i = 0; i < pasword.length(); i++)
    {
        if (isupper(pasword[i]))
        {
            hasUpper = true;
        }
        else if (islower(pasword[i]))
        {
            hasLower = true;
        }
    }

    if (hasUpper && hasdigit)
    {
        return true;
    }
    else
    {
        return false;
    }

    
}
int main (){
    string pasword;
    cout << "ingrese una contrasena: " << endl;
    cin >> pasword;
    if (correctPasword(pasword))
    {
        cout << "contrasena segura ";
    }
    else
    {
        cout << "contrasena insegura ";
    }
    
    return 0;

}
