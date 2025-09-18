/*1. En el ejercicio 2, modifique la función clasificarNumero para que muestre un
mensaje especial si el número está entre -100 y 100.
*/
#include <iostream>
using namespace std;
void clasificarNumero(int number) {
    if (number > -100 && number < 100) {
        cout << "el numero esta entre -100 y 100" << endl;
    }
    else if (number > 0) {
        cout << "el numero es positivo" << endl;
    }
    else if (number < 0) {
        cout << "el numero es negativo" << endl;
    }
    
    else {
        cout << "el numero es cero" << endl;
    }
}
    
int main() {
    int Usernumber;
    cout << "ingresa un numero: " << endl;
    cin >> Usernumber;
    clasificarNumero(Usernumber);
    return 0;
}