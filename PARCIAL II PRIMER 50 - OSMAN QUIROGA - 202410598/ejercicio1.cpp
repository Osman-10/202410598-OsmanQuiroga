#include <iostream>
using namespace std;
int calculateTotal(int hours, int rate) {
    return hours * rate;
}
void printInvoice(string plate, int hours, int rate) {
    int total = calculateTotal(hours, rate);
    cout << " Vehiculo: " << plate  << endl << " horas: " << hours <<endl << " tarifa: "<< rate << endl <<" total: " << total << endl;
}
int main() {
    string plate;
    int hours, rate;
    cout << "Ingrese la placa del vehIculo: " << endl ;
    cin >> plate;
    cout << "Ingrese las horas de parqueo: " << endl;
    cin >> hours;
    cout << "Ingrese la tarifa por hora: " << endl;
    cin >> rate;
    printInvoice(plate, hours, rate);
    return 0;
}