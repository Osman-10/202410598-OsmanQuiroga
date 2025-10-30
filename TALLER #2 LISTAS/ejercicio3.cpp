/*Ejercicio 3: Mostrar la lista de edades y calcular la edad promedio
Crea un programa que recorra una lista de edades, las muestre en pantalla y calcule la edad promedio.
Ejemplo:
int edades[6] = {18, 21, 25, 30, 27, 22};*/
#include <iostream>
using namespace std;
void showAgesAndAverage()
{
    int ages[6] = {18, 21, 25, 30, 27, 22};
    int sumAges = 0;

    cout << "Lista de edades: ";
    for (int i = 0; i < 6; i++) 
    {
        cout << ages[i] << ", ";
        sumAges += ages[i];
    }
    cout << endl;

    double averageAge = sumAges / 6;
    cout << "Edad promedio: " << averageAge << endl;
}
int main()
{
    showAgesAndAverage();
    return 0;
}