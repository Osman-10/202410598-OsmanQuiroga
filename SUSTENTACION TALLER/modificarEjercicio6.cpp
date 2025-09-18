/*2. En el ejercicio 6, diseñe una función que reciba tres números y retorne el mayor,
asegurándose de manejar correctamente empates entre dos o más números.
*/
#include <iostream>
using namespace std;
int mayorDeTres(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (a == b && a > c) {
        return a; 
        cout << "hay un empate entre a y b" << endl;
    } else if (b > a && b > c) {
        return b;
    } else if (a == c && a > b) {
        return a; 
        cout << "hay un empate entre a y c" << endl;
    } else if (b == c && b > a) {
        return b; 
        cout << "hay un empate entre b y c" << endl;
    } else if (a == b && a == c) {
        cout << "los tres numeros son iguales" << endl;
        return a;
    } else {
        return c;
    }
}
int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    int mayor = mayorDeTres(num1, num2, num3);

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
