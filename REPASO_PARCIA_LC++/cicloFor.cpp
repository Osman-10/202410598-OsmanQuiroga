#include <iostream>
using namespace std;
void mostrarTabla(int number) {
    cout << "Tabla del " << number << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}
int main() {
    int number;
    cout << "ingrese un numero para ver su tabla: " << endl;
    cin >> number;
    mostrarTabla(number);
    return 0;
}