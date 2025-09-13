/*función con 2 parámetros y retorno bool
Cada cierto número de hojas producidas, la máquina debe hacer una pausa para
mantenimiento.
Crea una función requiereMantenimiento(int hojas, int intervalo) que retorne:
● true si la cantidad de hojas (hojas) es divisible por el intervalo de mantenimiento.
● false en caso contrario.
En el main, el usuario ingresa cuántas hojas se produjeron y cada cuántas hojas la máquina
debe detenerse.
El programa dirá si la máquina requiere mantenimiento o no.
Ejemplo 1:
Entrada → hojas = 1000, intervalo = 500
Salida → La máquina requiere
mantenimiento.
Ejemplo 2:
Entrada → hojas = 750, intervalo = 400
Salida → La máquina no requiere
mantenimiento.*/
#include <iostream>
using namespace std;
    bool requireMaintenance(int sheets, int interval){
        if (sheets % interval == 0)
        {
            return true;
        }
        else
        {
            return false;
        } 
    }
    int main(){
        int sheets, interval;
        cout <<"ingresa la cantidad de hojas producidas: " << endl;
        cin >> sheets;
        cout <<"ingresa el intervalo de mantenimiento: " << endl;
        cin >> interval;
        if (requireMaintenance(sheets, interval))
        {
            cout << "La maquina requiere mantenimiento" << endl;
        }
        else
        {
            cout << "La maquina no requiere mantenimiento" << endl;
        }
        
        return 0;
    }