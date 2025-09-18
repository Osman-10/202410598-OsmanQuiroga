#include <iostream>
using namespace std;

int mayor(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) 
    {
        cout << "El numero mayor es: " << firstNumber << endl;
        return firstNumber;
    } 
    else if (secondNumber > firstNumber) 
    {
        cout << "El numero mayor es: " << secondNumber << endl;
        return secondNumber;
    } 
    else
    {
        cout << "Los numeros son iguales." << endl;
        return firstNumber;  // O secondNumber, da igual porque son iguales
    }
}

int main() {
    int firstNumber, secondNumber;
    cout << "Ingrese dos numeros para saber cual es mayor: ";
    cin >> firstNumber;
    cin >> secondNumber;
    mayor(firstNumber, secondNumber);
    return 0;
}
