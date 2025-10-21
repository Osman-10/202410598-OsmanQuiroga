# include <iostream>
using namespace std;

int main() {
    int precioHuevo = 100;  // Precio fijo del huevo
    int cantidadCompra, precioTotal, nuevoPrecio, pagoCon, cambio;  // Variables para la compra
    int descuento = 0;  // Inicializa el descuento en 0

    cout << "BIENVENIDO A LA TIENDA" << endl;
    cout << "Ofrecemos huevos a 100 $" << endl;
    cout << "Con la compra de 20 o mas huevos se aplica un descuento del 10%" << endl;
    cout << "Si desea comprar, por favor indique cuantos:" << endl;
    cin >> cantidadCompra;

    nuevoPrecio = precioHuevo; // Inicializa con el precio normal

    if (cantidadCompra >= 20) {  // Aplica el descuento si compra 20 o más
        descuento = precioHuevo * 0.1;  // Calcula el descuento
        nuevoPrecio = precioHuevo - descuento; // Nuevo precio con descuento
        cout << "El huevo cuesta ahora " << nuevoPrecio << " $" << endl;
    } else {    // No aplica descuento
        cout << "No tienes descuento" << endl;
    }

    precioTotal = cantidadCompra * nuevoPrecio; // Calcula el precio total
    cout << "El precio total es: " << precioTotal << " $" << endl;

    cout << "con cuanto va a pagar" <<endl;
    cin >> pagoCon;

    if (pagoCon > precioTotal) {
        cambio = pagoCon - precioTotal;
        cout << "su cambio es de: " << cambio << endl;
    } else if (pagoCon == precioTotal) {
        cout << "completo el pago" << endl;
    } else {
        cambio = precioTotal - pagoCon;
        cout << "le faltan: " << cambio << endl;
    }
    
    return 0;
}















