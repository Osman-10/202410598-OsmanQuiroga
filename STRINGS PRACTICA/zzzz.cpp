# include <iostream>
using namespace std;
bool large(string size) {
    int tope = 8;
    if (size.size() >= tope)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main(){
    string size;
    cout << "ingrese una frase: " << endl;
    getline (cin,size);
    if (large(size))
    {
        cout << "la frase tiene mas de 8 caracteres " << endl;
    }
    else 
    {
        cout << "la palabra es corta"  << endl;
    }
    

    return 0;

}