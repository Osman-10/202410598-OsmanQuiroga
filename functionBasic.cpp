#include <iostream>
using namespace std;
void note() {
    int note;
    cout << "ingresa tu nota" << endl;
    cin >> note;
    if (note >= 30) {
        cout << "aprobaste" << endl;
    } else {
        cout << "reprobaste" << endl;
    }
}
int main() {
    note();
    return 0;
}