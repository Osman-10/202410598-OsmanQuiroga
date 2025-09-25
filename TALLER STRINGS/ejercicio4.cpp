# include <iostream>
using namespace std;
 void counterMax(){
    int number;
    cout << "ingresa un numero: "<< endl;
    cin >> number;
    string word;
    int counter = 0;
    cout << "ingresa palabras (se termina con 'fin') " << endl;
    while ( word != "fin" )
    {
        cin >> word;
        if ( word.size() > number)
        {
            counter++;
        }
 
    }
    cout << "hay " << counter << " palabras con mas de " << number << " caracteres.";
    

 }
 int main(){
    counterMax();
 }