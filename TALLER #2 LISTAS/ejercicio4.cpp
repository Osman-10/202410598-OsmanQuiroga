/*Ejercicio 4: Encontrar el precio más alto y el más bajo
Crea un programa que recorra una lista de precios, calcule la suma total, y determine cuál es el precio
más alto y el más bajo.
Ejemplo:
float precios[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
*/
#include <iostream>
using namespace std;
void findHighestAndLowestPrice()
{
    float prices[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    float totalSum = 0;
    float highestPrice = prices[0];
    float lowestPrice = prices[0];

    for (int i = 0; i < 6; i++) 
    {
        totalSum += prices[i];

        if (prices[i] > highestPrice) 
        {
            highestPrice = prices[i];
        }

        if (prices[i] < lowestPrice) 
        {
            lowestPrice = prices[i];
        }
    }


    cout << "Suma total: " << totalSum << endl;
    cout << "Precio mas alto: " << highestPrice << endl;
    cout << "Precio mas bajo: " << lowestPrice << endl;
}
int main()
{
    findHighestAndLowestPrice();
    return 0;
}