#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Ingrese su nombre: ";
    cin >> name;

    bool esMayor = name.size() >= 10;

    if (esMayor) {
        cout << "Tu nombre tiene mas de 10 characteres " << endl;
    } else {
        cout << "Tu nombre tiene menos de 10 characteres" << endl;
    }

    return 0;
}
