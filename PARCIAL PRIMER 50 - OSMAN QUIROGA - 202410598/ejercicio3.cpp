
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