/*Ejercicio 3: Adivina el Número

Objetivo: Crear un juego donde el usuario debe adivinar un número aleatorio.
Requisitos:
Generación de números aleatorios: Usar la función rand() (y srand() para inicializar la semilla) para generar un número aleatorio entre 1 y 100 (por ejemplo).
Entrada: Solicitar al usuario que ingrese un número.
Ciclo: Usar un ciclo while para permitir al usuario adivinar hasta que acierte.
Condicionales:
Verificar si el número ingresado es correcto.
Dar pistas al usuario (mayor o menor) si el número es incorrecto.
Salida:
Informar al usuario si adivinó correctamente.
Indicar el número de intentos que le tomó.
Funciones:
Crear una función con retorno (por ejemplo, int generarNumeroAleatorio()) que genere y retorne el número aleatorio.
Crear una función sin retorno (por ejemplo, void jugarAdivinanza()) que contenga la lógica del juego.
*/
#include <iostream>
#include <cstdlib> // Para rand() y srand() 
using namespace std;
int generarNumeroAleatorio() {
    return rand() % 100 + 1; // Genera un numero entre 1 y 100
}
void jugarAdivinanza() {
    int numeroSecreto = generarNumeroAleatorio();
    int intento;
    int intentos = 0;
    cout << "Adivina el numero entre 1 y 100!" << endl;
    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        intentos++;
        if (intento < numeroSecreto) {
            cout << "Demasiado bajo! Intenta de nuevo." << endl;
        } else if (intento > numeroSecreto) {
            cout << "Demasiado alto! Intenta de nuevo." << endl;
        } else {
            cout << "Felicidades! Adivinaste el numero en " << intentos << " intentos." << endl;
        }
    } while (intento != numeroSecreto);
}
int main() {
    srand(0); // Inicializa la semilla para numeros aleatorios
    jugarAdivinanza();
    return 0;
}