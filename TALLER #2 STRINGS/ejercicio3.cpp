
# include <iostream>
using namespace std;
int contarGuiones(string codigoProducto)
{
    int counterGuion = 0;
    for (int i = 0; i < codigoProducto.size(); i++)
    {
        if (codigoProducto[i] == '-')
        {
            counterGuion++;
        }
        
    }
    return counterGuion;
    
}
int contarDigitos(string codigoProducto)
{
    int counterDigits = 0;
    for (int i = 0; i < codigoProducto.size(); i++)
    {
        if (codigoProducto[i] >= 48 && codigoProducto[i] <= 57)
        {
            counterDigits++;
        }
        
    }
    return counterDigits;
}
bool validarUltimaMayuscula(string codigoProducto)
{
    if (codigoProducto[codigoProducto.size() - 1] >= 65 && codigoProducto[codigoProducto.size() - 1] <= 90)
    {
        return true;
    }
    return false;
}

void analisisCode()
{
    string codigoProducto;
    cout << "ingrese el codigo: " << endl;
    cin >> codigoProducto;

    int scrips = contarGuiones(codigoProducto);
    cout << "El codigo tiene " << scrips << " guiones" << endl;

    int digits = contarDigitos(codigoProducto);
    cout << "El codigo tiene " << digits << " digitos"  << endl;
  
    if (validarUltimaMayuscula(codigoProducto))
    {
        cout << "El codigo termina con mayuscula" <<  endl;
    }
    else
    {
        cout << "El codigo no termina con mayuscula" << endl;
    }

}

int main()
{
    analisisCode();
    return 0;
}