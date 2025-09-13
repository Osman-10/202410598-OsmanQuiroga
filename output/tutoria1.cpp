#include <iostream>
using namespace std;

bool esPar(int number) {
    return number % 2 == 0;
}

int main() {
    int userNumber;
    cout << "Ingrese el numero: ";
    cin >> userNumber;

    if (esPar(userNumber)) {
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }

    return 0;
}
