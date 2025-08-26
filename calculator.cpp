/*Simple calculator C++
 author : Osman Quiroga
 date: 2025-08-26
*/ 


#include <iostream>
using namespace std;

int main() {
    int value1, value2, result;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> value1;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingrese el segundo numero: ";
    cin >> value2;

    if (operacion == '+') {
        result = value1 + value2;
        cout << "Resultado: " << result << endl;
    } else if (operacion == '-') {
        result = value1 - value2;
        cout << "Resultado: " << result << endl;
    } else if (operacion == '*') {
        result = value1 * value2;
        cout << "Resultado: " << result << endl;
    } else if (operacion == '/') {
        if (value2 != 0) {
            result = value1 / value2;
            cout << "Resultado: " << result << endl;
        } else {
            cout << "Error: No se puede diividir por cero." << endl;
        }
    } else {
        cout << "Operador no valido." << endl;
    }
    return 0;
}