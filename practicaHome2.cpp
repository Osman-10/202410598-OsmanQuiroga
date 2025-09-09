# include <iostream>
using namespace std;
int main() {
    float value1,value2, result;
    int operacion;
    cout << "ingrese dos numeros" << endl;
    cin >> value1;
    cin >> value2;
    cout << "ingrese la operacion que desea " << endl << "1 : suma " << endl << "2 : resta" << endl<< "3 : factor" << endl << "4 : division" << endl ;
    cin >> operacion;
    switch (operacion)
    {
    case 1:
        result = value1 + value2;
        cout << "el resultado es "<< result << endl;
        break;
    case 2:
        result = value1 - value2;
        cout << "el resultado es" << result << endl;
        break;
    case 3:
        result = value1 * value2;
        cout << "el resultado es" << result << endl;
        break;
    case 4:
        result = value1 / value2;
        if (value2 != 0)
        {
            cout << "el resultado es: " << result << endl;
        }
        else
        {
            cout << "no se puede divdir en 0"<< endl;
        }
    default:
        break;
    }
}