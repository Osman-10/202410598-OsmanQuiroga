#include <iostream>
using namespace std;

void contadorAscendente(int num){
    int contador = 0;
    while (contador <= num)
    {
        cout << "valor: " << contador << endl;
        contador ++;
    }
    
}
void contadorDescendente(int num){
    while (num >= 0)
    {
        cout << "valor: " << num << endl;
        num --;
    }
    
}

int main() {
    int number;
    cout << "ingrese un numero: " << endl;
    cin >> number;
    cout <<"contador ascendente " << endl;
    contadorAscendente(number);
    cout <<"contador descendente " << endl;
    contadorDescendente(number);
    return 0;
}