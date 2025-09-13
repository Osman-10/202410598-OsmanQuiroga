/*función con 2 parámetros y void
Una máquina produce papel desde el turno inicio hasta el turno fin. Se debe imprimir todos
los turnos en los que la máquina trabajó.
● Si el turno inicial es mayor que el turno final, mostrar un error: "Error: el turno
inicial no puede ser mayor que el final".
● Usa un ciclo while para recorrer los turnos.
Ejemplo 1:
Entrada → inicio = 2, fin = 5
Salida → La máquina trabajó en los turnos:
2 3 4 5.
Ejemplo 2:
Entrada → inicio = 6, fin = 3
Salida → Error: el turno inicial no puede ser
mayor que el final.*/
#include <iostream>
using namespace std;
    void showWorkShifts(int start, int end){
        if (start > end)
        {
            cout << "Error: el turno inicial no puede ser mayor que el final" << endl;
        }
        else
        {
            cout << "La maquina trabajo en los turnos: " << endl;
            while (start <= end)
            {
                cout << start << " "; 
                start++;  
            }
            cout << endl;
        }
    }
    int main(){
        int start, end;
        cout <<"ingresa el turno de inicio: " << endl;
        cin >> start;
        cout <<"ingresa el turno de fin: " << endl;
        cin >> end;
        showWorkShifts(start, end);
        
        return 0;
    }