#include <iostream>
using namespace std;

int square(int number) { 
    cout << "Ingresa un numero: ";
    cin >> number;  
    cout << "El cuadrado de " << number << " es: " << number * number << endl;
    return number * number;
}
int main() {
    int value1, value2, result;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> value1;
    cout << "Ingrese el operador (+, -, *): ";
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
    
        default:
            cout << "Operacion no valida." << endl;
    }
    square (0); // Llamada a la función square, pasando un valor inicial (0 en este caso), aunque no se utiliza dentro de la función.
    return 0;

}










