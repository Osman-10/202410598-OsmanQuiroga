
#include <iostream>
using namespace std;
    void showEvenNumbers(int n){
        for (int i = 2; i <= n; i+=2)
        {
            cout << "Paquetes revisados: " << i << endl;
        }
        
    }
    void showOddNumbers(int n)
    {
        for (int i = 1; i <= n; i+=2)
        {
            cout << "Paquetes revisados: " << i << endl;
        }
        
    }
    int main(){
        int nn;
        cout <<"ingresa la cantidad de paquetes: " << endl;
        cin >> nn;
        if (nn % 2 == 0)
        {
            showEvenNumbers(nn);
        }
        else
        {
            showOddNumbers(nn);
        }
        
        return 0;
    }