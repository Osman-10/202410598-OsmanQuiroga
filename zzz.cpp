# include <iostream> 
using namespace std;
bool esMayor(int mayor) {
    const int esMayor = 18;
    if (mayor >= esMayor)
    {
       return true;
    }
    else 
    {
        return false;
    }
}
int main(){
    int mayor;
    cout << "ingrese la edad: "<< endl;
    cin >> mayor;
    if (esMayor(mayor))
    {
        cout << "tines mas de 18 " << endl;
    }
    else
    {
        cout << "no  puedes entrar" << endl;
    }
    return 0;
}