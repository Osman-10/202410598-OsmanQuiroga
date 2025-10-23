# include <iostream>
using namespace std;
int counterDigit(string cadena)
{
    int count = 1;
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] == ' ')
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
    cout << "hay " << count << " palabras";
    return 0;
    
}