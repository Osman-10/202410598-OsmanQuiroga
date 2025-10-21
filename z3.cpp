# include <iostream> 
using namespace std;


bool contieneNumero(string texto)
{
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] >= 48 && texto[i] <= 57 )
        {
            return true;
        } 
    }
    return false;
}


void comprobar()
{
    string texto;
    cout << "ingrese: " ;
    cin >> texto;
    if (contieneNumero(texto))
    {
        cout << " corectooooooo";
    }
    else
    {
        cout << "nadaaaaaa" ;
    }
}

int main()
{
    comprobar();
    return 0;
}