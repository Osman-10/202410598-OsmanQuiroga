#include <iostream>
using namespace std;
bool isValidAmount(int amount) {
    return amount % 50 == 0;
}
void dispenseBills(int amount) {
    int bills200 = 0, bills100 = 0, bills50 = 0;
    while (amount >= 200) {
        amount -= 200;
        bills200++;
    }
    cout << bills200 << " bills of 200" << endl;
    while (amount >= 100) {
        amount -= 100;
        bills100++;
    }
    cout << bills100 << " bills of 100" << endl;
    while (amount >= 50) {
        amount -= 50;
        bills50++;
    }
    cout << bills50 << " bill of 50" << endl;
}
int main() {
    int amount;
    cout << "Ingrese el monto a retirar: " << endl;
    cin >> amount;
    cout << "monto a retirar: "<< amount << endl;
    if (isValidAmount(amount)) {
        dispenseBills(amount);
    } else {
        cout << "Monto no valido, debe ser multiplo de 50" << endl;
    }
    return 0;
}   