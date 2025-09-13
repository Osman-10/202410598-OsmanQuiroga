 /*Ejercicio 1 – función con 1 parámetro y void
En la fábrica, una máquina corta hojas de papel en paquetes.
● Si la cantidad de paquetes (n) es par, mostrar los números de serie de los paquetes
pares hasta n.
● Si la cantidad de paquetes es impar, mostrar los números de serie de los paquetes
impares hasta n.
Ejemplo 1:
Entrada → n = 8
Salida → Paquetes revisados: 2 4 6 8

*/
#include <iostream>
using namespace std;
    void showEvenNumbers(int n){
        for (int i = 2; i <= n; i+=2)
        {
            cout << "Paquetes revisados: " << i << endl;
        }
        
    }
    void showOddNumbers(int n){
        for (int i = 1; i <= n; i+=2)
        {
            cout << "Paquetes revisados: " << i << endl;
        }
        
    }
    int main(){
        int n;
        cout <<"ingresa la cantidad de paquetes: " << endl;
        cin >> n;
        if (n % 2 == 0)
        {
            showEvenNumbers(n);
        }
        else
        {
            showOddNumbers(n);
        }
        
        return 0;
    }