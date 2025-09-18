/*Ejercicio 1: Calculadora Simple

Objetivo: Crear una calculadora que realice operaciones básicas (suma, resta, multiplicación, división).
Requisitos:
Entrada: Solicitar al usuario dos números y la operación a realizar (usando un char para +, -, *, /).
Condicionales: Usar if/else if/else o switch para determinar la operación a realizar.
Salida: Mostrar el resultado de la operación.
Funciones:
Crear una función con retorno (por ejemplo, double calcular(double num1, double num2, char operacion)) que realice la operación y retorne el resultado.
Crear una función sin retorno (por ejemplo, void mostrarResultado(double resultado)) que muestre el resultado en la consola.
*/
#include <iostream>
using namespace std;
double calcular(double num1, double num2, char operacion) {
    double resultado;
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: Division por cero no es permitida." << endl;
            }
            break;
        default:
            cout << "Error: Operacion no valida." << endl;
    }
    return resultado;
}
void mostrarResultado(double resultado) {
    cout << "El resultado es: " << resultado << endl;
}
int main() {
    double num1, num2;
    char operacion;
    
    // Solicitar al usuario los numeros y la operacion
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;
    
    // Calcular el resultado
    double resultado = calcular(num1, num2, operacion);
    
    // Mostrar el resultado
    mostrarResultado(resultado);
    
    return 0;
}