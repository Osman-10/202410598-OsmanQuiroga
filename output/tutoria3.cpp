#include <iostream>
using namespace std;
void contador(int userNumber){
    for (int i= 0; i<=userNumber; i++)
    {
        cout <<"valor : " << i <<endl;
    }
}
void contadorWhile(int number){
    int contador=0;
    while(contador <= number)
    {
        cout << contador <<endl;
        contador++;
    }
}
void contadorInvertido(int number){
    for (int i = number; i >= 0; i--)
    {
        cout << "valor: " << i << endl;
    }
}
void contadorInvertidoWhile (int number){
    int contador = number;
    while (contador >= 0)
    {
        cout << "valor: " << contador << endl;
        contador--;
    }
}
int main(){
    int number;
    cout <<"ingrese un numero: ";
    cin >>number;
    contadorWhile(number);
    return 0;
}