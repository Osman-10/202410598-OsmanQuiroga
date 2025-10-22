# include <iostream>
using namespace std;
string removeSpaces(string cadena)
{
    string result = "";
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] != ' ')
        {
            result += cadena[i];
         
        }
        
    }
    return result;
    

}
int main(){
    string fra;
    cout << "ingrese una frase" << endl;
    getline(cin, fra);
    cout<< "nueva frase: " << endl;
    fra = removeSpaces(fra);
    cout << fra;
    return 0;
    
}