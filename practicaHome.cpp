#include <iostream>
using namespace std;
int main(){
    int valorOne, valorTwo, result;
    cout << "ingrese dos numeros"<< endl;
    cin >> valorOne;
    cin >> valorTwo;
    if (valorOne > valorTwo)
    {
        cout << "me gustas " << endl;
    }
    else if (valorOne < valorTwo)
    {     
        cout << "no me gustas"<< endl;
    }
    else
    {
        result = valorOne + valorTwo;
        cout << "la suma de " << valorOne << " + " << valorTwo << " es = " << result << endl;
    } 
return 0;
}