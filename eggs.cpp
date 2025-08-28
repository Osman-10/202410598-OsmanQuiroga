# include <iostream>
using namespace std;
int main() {
	const int eggPrice = 12;
	double buy, pay;
	double discount, newEggPrice = eggPrice, totalValue;

	cout << " Los huevos valen 12 pesos, cuantos huevos desea comprar?" << endl;
	cin >> buy;
    if (buy >= 30) {
        discount = eggPrice * 0.10;
        newEggPrice = eggPrice - discount;
        cout << "Tienes un descuento del 10% en cada huevo, el nuevo precio es: " << newEggPrice << " pesos" << endl;
    } else {
        cout << "No tienes descuento" << endl;
    }

	totalValue = buy * newEggPrice;

	cout << "Mi compra cuesta: " << buy << " * " << newEggPrice << " = " << totalValue << " pesos" << endl;

    cout << "¿Con cuánto va a pagar?" << endl;
    cin >> pay;
    cout << "Paga con: " << pay << " pesos" << endl;
    if (pay > totalValue) {
        cout << "Su cambio es: " << pay - totalValue << " pesos" << endl;
    } else if (pay == totalValue) {
        cout << "Gracias por su compra" << endl;
    } else {
        cout << "Te faltan: " << totalValue - pay << " pesos para completar tu compra" << endl;
    }
	return 0;
}

