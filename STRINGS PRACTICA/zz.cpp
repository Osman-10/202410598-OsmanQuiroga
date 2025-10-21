# include <iostream>
using namespace std;
int main(){
    string name, lastname, nameComplet;
    cout << "ingrese su nombre: " << endl;
    cin >> name;
    cout << "ingrese su apellido: " << endl;
    cin >> lastname;
    nameComplet = name + ' '+ lastname + ' ' +"es una loka" ;
    cout << nameComplet << endl;
    return 0;
    
}