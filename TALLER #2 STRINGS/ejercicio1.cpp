
# include <iostream>
using namespace std;
bool validarLongitud(string nombreUsuario)
{
    if (nombreUsuario.length() < 6 || nombreUsuario.length() > 12 )
    {
        return false;
    }
    return true;
}
bool validarInicioLetra(string nombreUsuario)
{

    for (int i = 0; i < nombreUsuario.size(); i++)
    {
        if (nombreUsuario[0] > 97 && nombreUsuario[0] < 122 || nombreUsuario[0] > 65 && nombreUsuario[0] < 90)
        {
            return true;
        }
        
    }
    return false;
    
}
bool validarSinEspacios(string nombreUsuario)
{
    for (int i = 0; i < nombreUsuario.size(); i++)
    {
        if (nombreUsuario[i] == 32)
        {
            return false;
            
        }
        
    }
    return true;
}

void verifyUser()
{
    string nombreUser;
    cout << "ingrese un nombre de usuario: " << endl;
    getline (cin,nombreUser); 
    if (validarLongitud( nombreUser) && validarInicioLetra( nombreUser) && validarSinEspacios(nombreUser))
    {
        cout << "acceso concedido";
    }
    else
    {
        cout << "acceso denegado";
    }
    
}
int main ()
{
    verifyUser();
    return 0;

}