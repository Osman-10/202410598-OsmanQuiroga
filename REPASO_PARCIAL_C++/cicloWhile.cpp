#include <iostream>
using namespace std;
 void contarDescendente(int number){
    while (number >= 0)
    {
        cout << "valor: " << number << endl;
        number--;
    }
 }
 void contarAscendente(int number){
    int contador = 0;
    while (contador <= number)
    {
        cout << "valor: " << contador << endl;
        contador++;
    }
    
 }


 int main(){
    int number;
    cout <<"ingresa un numero: " << endl;
    cin >> number;
    cout << "Contador de forma descendente" << endl;
    contarDescendente(number);
    cout << "Contador de forma ascendente" << endl;
    contarAscendente(number);
    return 0;
 }