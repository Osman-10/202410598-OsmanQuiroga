/*Ejercicio 5: Menú Interactivo con Opciones

Objetivo: Crear un programa con un menú que permita al usuario elegir diferentes opciones.
Requisitos:
Menú: Mostrar un menú con varias opciones (por ejemplo: 1. Sumar, 2. Restar, 3. Salir).
Entrada: Solicitar al usuario que ingrese el número de la opción deseada.
Ciclo: Usar un ciclo while para mantener el menú en ejecución hasta que el usuario elija la opción "Salir".
Condicionales: Usar switch para ejecutar la acción correspondiente a la opción seleccionada.
Salida: Mostrar el resultado de la acción seleccionada o un mensaje de despedida.
Funciones:
Crear funciones para cada opción del menú (por ejemplo, void sumar(), void restar(), etc.).
Crear una función sin retorno (por ejemplo, void mostrarMenu()) que muestre el menú.
*/
# include <iostream>
using namespace std;
void mostrarMenu(){
int user;
while (user != 0){
cout << "elija una operacion: 1 para sumar, 2 para restar, 0 para salir: " << endl;
cin >> user;
if (user == 1){
cout << "ingresa dos números para sumarlos: "<< endl;
int n1,n2;
cin >> n1;
cin >> n2;
cout << n1 + n2 << endl;
}
else if (user == 2){
cout << "ingresa dos números para restarlos: "<< endl;
int n1,n2;
cin >> n1;
cin >> n2;
cout << n1 - n2 << endl;
}
else if (user == 0){
cout << "salir " << endl;
}
else {
cout << "opción no valida" << endl;
}
}
}
/*void operaciones() {
int user ,n1,n2;
if (user == 1){
cout << "ingresa dos números para sumarlos: "<< endl;
cin >> n1;
cin >> n2; 
cout << n1 + n2 << endl;
}
else if (user == 2){
cout << "ingresa dos números para restarlos: "<< endl;
cin >> n1;  
cin >> n2;
cout << n1 - n2 << endl;
}
else {
cout << "opción no valida" << endl;
}
}
*/
int main() {
mostrarMenu();
 //operaciones();
}