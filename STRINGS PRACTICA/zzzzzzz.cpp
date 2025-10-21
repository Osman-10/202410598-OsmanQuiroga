#include <iostream>
using namespace std;

bool correctPassword(string posiblePassword) {
    string password1 = "1234";
    string password2 = "clave123";

    if (posiblePassword == password1 || posiblePassword == password2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string posiblePassword;
    int intentos = 0;
    const int MAX_INTENTOS = 3;

    cout << "Ingrese su contrasena: ";
    cin >> posiblePassword;

    while (!correctPassword(posiblePassword) && intentos < MAX_INTENTOS-1 ) {
        intentos++;
        cout << "Contrasena incorrecta. " << endl;
        cout << "Intente de nuevo: ";
        cin >> posiblePassword;
    }
    if (correctPassword(posiblePassword)) {
        cout << "Acceso concedido." << endl;
    } else {
        cout << " Ha superado el numero maximo de intentos. Acceso bloqueado." << endl;
    }

    return 0;
}
