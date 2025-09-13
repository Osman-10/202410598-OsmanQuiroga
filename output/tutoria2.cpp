#include <iostream>
using namespace std;
void week(int day) {
    switch (day) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Valor no valido." << endl; break;
    }
}
int main() {
    int number;
    cout << "Ingrese un numero (1-7) para ver el dia de la semana: ";
    cin >> number;
    week(number);
    return 0;
}
