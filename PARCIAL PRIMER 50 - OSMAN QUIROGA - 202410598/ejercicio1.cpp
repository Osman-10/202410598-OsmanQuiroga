
#include <iostream>
using namespace std;
    void showEvenNumbers(int n){
        for (int i = 2; i <= n; i+=2)
        {
            cout << "Paquetes revisados: " << i << endl;
        }
        
    }
    void showOddNumbers(int n){
        for (int i = 1; i <= n; i+=2)
        {
            cout << "Paquetes revisados: " << i << endl;
        }
        
    }
    int main(){
        int n;
        cout <<"ingresa la cantidad de paquetes: " << endl;
        cin >> n;
        if (n % 2 == 0)
        {
            showEvenNumbers(n);
        }
        else
        {
            showOddNumbers(n);
        }
        
        return 0;
    }