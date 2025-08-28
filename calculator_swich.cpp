/* Calculadora simple en C++ usando switch
   Autor: Osman Quiroga
   Fecha: 2025-08-27
*/
# include <iostream>
using namespace std;
int main() {
    int value1, value2, result;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> value1;
    cout << "Ingrese el operador (+, -, *, /, %): ";
    cin >> operacion;
    cout << "Ingrese el segundo numero: ";
    cin >> value2;

    switch (operacion) {
        case '+':
            result = value1 + value2;
            cout << "El resultado es: " << result << endl;
            break;
        case '-':
            result = value1 - value2;
            cout << "El resultado es: " << result << endl;
            break;
        case '*':
            result = value1 * value2;
            cout << "El resultado es: " << result << endl;
            break;
        case '/':
            if (value2 != 0) {
                result = value1 / value2;
                cout << "El resultado es: " << result << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        case '%': 
            if (value2 != 0) {
                result = value1 % value2;
                cout << "El resultado es: " << result << endl;                                                                                                                            
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;

        default:
            cout << "Operacion no valida." << endl;
    }
    return 0;

}










