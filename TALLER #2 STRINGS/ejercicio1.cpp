
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
        if (nombreUsuario[i] == ' ')
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
    getline (cin,nombreUser);  // use el getline para que tome los espacios en caso de que el usuario los ingrese, asi se puede validar correctamente que no tenga espacios.
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