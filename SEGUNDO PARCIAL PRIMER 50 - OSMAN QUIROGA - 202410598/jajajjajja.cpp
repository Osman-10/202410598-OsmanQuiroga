
/*Ejercicio 4: Conversor de Monedas

Objetivo: Crear un programa que convierta una cantidad de dinero de una moneda a otra.
Requisitos:
Entrada:
Solicitar al usuario la cantidad de dinero a convertir.
Solicitar la moneda de origen y la moneda de destino (por ejemplo, usando códigos como "USD", "EUR", "PCOL").
Condicionales: Usar if/else if/else o switch para determinar los tipos de cambio.
Salida: Mostrar el resultado de la conversión.
Funciones:
Crear una función con retorno (por ejemplo, double convertirMoneda(double cantidad, string monedaOrigen, string monedaDestino)) que realice la conversión y retorne el resultado.
Crear una función sin retorno (por ejemplo, void mostrarConversion(double resultado, string monedaDestino)) que muestre el resultado en la consola.
*/
#include <iostream>
#include <string>
using namespace std;
double convertirMoneda(double cantidad, string monedaOrigen, string monedaDestino) {
    double tasaCambio = 0.0; // Tasa de cambio entre las monedas

    // Definir tasas de cambio (ejemplos)
    if (monedaOrigen == "USD" && monedaDestino == "EUR") {
        tasaCambio = 0.85; // 1 USD = 0.85 EUR
    } else if (monedaOrigen == "EUR" && monedaDestino == "USD") {
        tasaCambio = 1.18; // 1 EUR = 1.18 USD
    } else if (monedaOrigen == "USD" && monedaDestino == "PCOL") {
        tasaCambio = 4000.0; // 1 USD = 4000 PCOL
    } else if (monedaOrigen == "PCOL" && monedaDestino == "USD") {
        tasaCambio = 0.00025; // 1 PCOL = 0.00025 USD
    } else if (monedaOrigen == "EUR" && monedaDestino == "PCOL") {
        tasaCambio = 4700.0; // 1 EUR = 4700 PCOL
    } else if (monedaOrigen == "PCOL" && monedaDestino == "EUR") {
        tasaCambio = 0.00021; // 1 PCOL = 0.00021 EUR
    } else {
        cout << "Conversion no soportada." << endl;
        return 0.0;
    }

    return cantidad * tasaCambio;
}
void mostrarConversion(double resultado, string monedaDestino) {
    cout << "El resultado de la conversion es: " << resultado << " " << monedaDestino << endl;
}
int main() {
    double cantidad;
    string monedaOrigen, monedaDestino;

    // Solicitar al usuario la cantidad y las monedas
    cout << "Ingrese la cantidad de dinero a convertir: ";
    cin >> cantidad;
    cout << "Ingrese la moneda de origen (USD, EUR, PCOL): ";
    cin >> monedaOrigen;
    cout << "Ingrese la moneda de destino (USD, EUR, PCOL): ";
    cin >> monedaDestino;

    // Realizar la conversion
    double resultado = convertirMoneda(cantidad, monedaOrigen, monedaDestino);

    // Mostrar el resultado
    if (resultado != 0.0) {
        mostrarConversion(resultado, monedaDestino);
    }

    return 0;
}