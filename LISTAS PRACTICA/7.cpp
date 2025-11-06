#include <iostream>
using namespace std;

int main() {
    string nombres[5];
    int edades[5];

    cout << "Ingrese 5 nombres:\n";
    for (int i = 0; i < 5; i++)
        cin >> nombres[i];

    cout << "Ingrese 5 edades:\n";
    for (int i = 0; i < 5; i++)
        cin >> edades[i];

    cout << "\nMayores de edad:\n";
    for (int i = 0; i < 5; i++) {
        if (edades[i] >= 18)
            cout << nombres[i] << " tiene " << edades[i] << " anos " << endl;
    }

    cout << "\nMenores de edad:\n";
    for (int i = 0; i < 5; i++) {
        if (edades[i] < 18)
            cout << nombres[i] << " tiene " << edades[i] << " anos" << endl;
    }

    return 0;
}
