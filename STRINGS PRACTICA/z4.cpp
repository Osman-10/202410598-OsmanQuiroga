# include <iostream>
using namespace std;
bool tieneMinimoMayus(string texto)
{
    int mayus = 0;
    for (int  i = 0; i < texto.size(); i++)
    {
        if (texto[i] > 65 && texto[i] < 90)
        {
            mayus++;
            
        }
        
    }
    return mayus > 3;
    
}
void valid()
{
    string texto;
    cout << "escriba una contrasena " << endl;
    cin >> texto;
    if (tieneMinimoMayus( texto))
    {
        cout << "valee" ;
    }
    else 
    {
        cout << "incorrecta";
    }
    


}
int main()
{
    valid();
    return 0;
}
