 #include <iostream>
using namespace std;
void clasificarNumero(int number) {
    if (number > 0) {
        cout << "el numero es positivo" << endl;
    }
    else if (number < 0) {
        cout << "el numero es negativo" << endl;
    }
    else {
        cout << "el numero es cero" << endl;
    }
}
    
int main() {
    int Usernumber;
    cout << "ingresa un numero: " << endl;
    cin >> Usernumber;
    clasificarNumero(Usernumber);
    return 0;
}