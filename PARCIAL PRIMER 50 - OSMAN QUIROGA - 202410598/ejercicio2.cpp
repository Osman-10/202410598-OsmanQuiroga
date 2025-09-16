
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