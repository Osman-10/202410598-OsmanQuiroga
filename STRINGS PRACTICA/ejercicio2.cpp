# include <iostream>
using namespace std;
int counterDigit(string cadena)
{
    int count = 0;
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] >= 48 && cadena[i] <= 57)
        {
            count++;
            
        }
        
    }
    return count;
    

}
int main(){
    string fra;
    cout << "ingrese una frase" << endl;
    getline(cin, fra);
    int count = counterDigit(fra);
    cout << "hay " << count << " numeros";
    return 0;
    
}