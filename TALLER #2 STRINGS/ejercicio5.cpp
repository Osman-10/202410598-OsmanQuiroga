    
# include <iostream>
using namespace std;

bool tieneDigito(string codigoAcceso)
{
    for (int i = 0; i < codigoAcceso.size(); i++)
    {
        if (codigoAcceso[i] >= 48 && codigoAcceso[i] <= 57)
        {
            return true;
        }
        
    }
    return false;
    
}

bool tieneSimboloEspecial(string codigoAcceso)
{
    for (int i = 0; i < codigoAcceso.size(); i++)
    {
        if (codigoAcceso[i] == '@' || codigoAcceso[i] == '#' || codigoAcceso[i] == '$' || codigoAcceso[i] == '%')
        {
            return true;
        }
        
    }
    return false;
}

bool sinEspacios(string codigoAcceso)
{
    for (int i = 0; i < codigoAcceso.size(); i++)
    {
        if (codigoAcceso[i] == ' ')
        {
            return false;
        }
        
    }
    return true;
}
void validateCodeAcces()
{
    string codigoAcceso;
    cout << "ingrese el codigo de acceso: " << endl;
    getline (cin,codigoAcceso);

    if (tieneDigito(codigoAcceso) && tieneSimboloEspecial(codigoAcceso) && sinEspacios(codigoAcceso))
    {
        cout << "Codigo de acceso valido" << endl;
    }
    else
    {
        cout << "Codigo de acceso invalido" << endl;
    }
}


int main ()
{
    validateCodeAcces();  
    return 0;
}