# include <iostream>
using namespace std;
void counterWords(){
    string frase;
    cout << "escriba una frase: " << endl;
    getline(cin,frase);
    int counter = 1;
    for(int i = 0; i < frase.size(); i++)
    {
        if (frase[i] == ' ')
        {
            counter++;
        }
        
    }
    cout << "esta frase tiene: " << counter << " palabras"<< endl;

}
bool verifyPassword(){
    string password;
    cout << "escriba una contrasena: " << endl;
    getline(cin,password);  
    if (password.size() >= 8)
    {
        cout << "contrasena valida" << endl;
        return true;
    } else {
        cout << "contrasena invalida" << endl;
        return false;
    }

}
void removeVouels(){
    string name;
    cout << "escriba un nombre " << endl;
    getline(cin, name);
    cout << "nombre sin vocales " << endl;
    for (size_t j = 0; j < name.size(); j++)
    {
        if ('a'== name[j] || 'e'== name[j] || 'i'== name[j] || 'o'== name[j]|| 'u'== name[j])
        {
            cout << "";
        }
        else 
        {
            cout << name[j];
        }
        
    }
}
void invertString(){
    string name;
    cout << "escriba un nombre " << endl;
    getline(cin, name);
    
    for (int i = name.size(); i >= 0; i--)
    {
        cout << name[i] ;
    }

}
void duplicateSringcharacter(){
    string name;
    cout << "escriba un nombre " << endl;
    getline(cin, name);
    cout << "texto con letras duplicadas: " << endl;
    
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << name[i];
    }
}    
void stringChange(){
    string name;
    cout << "Cual es tu nombre: " << endl;
    getline(cin, name);
    cout << "cambiando espacios por guiones queda asi: " <<  endl;

    char newChar = '-';

    for (int  i = 0; i < name.size(); i++)
    {      
        if (name[i] == ' ')
        {
            cout << newChar;
        } else {
            cout << name[i];
        }
    }
    
   
}
int main(){
    removeVouels();
    return 0;
}