
# include <iostream>
using namespace std;
int contarVocales(string texto)
{
    int numberVouels = 0;
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == 'a' ||texto[i] == 'e' ||texto[i] == 'i' ||texto[i] == 'o' ||texto[i] == 'u' )
        {
            numberVouels++;
        }
        
    }
    return numberVouels;

}
int contarConsonantes(string texto)
{
    int numberConsonants = 0;
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] >= 97 && texto[i] <= 122)
        {
            if (texto[i] != 'a' && texto[i] != 'e' && texto[i] != 'i' && texto[i] != 'o' && texto[i] != 'u')
            {
                numberConsonants++;
            }  
        }  
    }
    return numberConsonants;
}
int contarNoAlfabeticos(string texto)
{
    int numberNoAlfhabetics = 0;
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] >= 48 && texto[i] <= 57  )
        {
            numberNoAlfhabetics ++;
          
        }
        else if (texto[i] >= 33 && texto[i] <= 47 )
        {
            numberNoAlfhabetics ++;
        }
        
    }
    return numberNoAlfhabetics ;
}

void counterVouelsAndConsonants()
{
    string texto;
    cout << "ingrese un texto: " << endl;
    cin >> texto;

    int counterVouels = contarVocales(texto);
    cout << "hay "<< counterVouels << " vocales" << endl;

    int counterConsonants = contarConsonantes(texto);
    cout << "hay "<< counterConsonants << " consonantes" << endl;

    int counterNoalfha = contarNoAlfabeticos(texto);
    cout << "hay "<< counterNoalfha << " caracteres no alfabeticos";
}


int main()
{
    counterVouelsAndConsonants();
    return 0;
}