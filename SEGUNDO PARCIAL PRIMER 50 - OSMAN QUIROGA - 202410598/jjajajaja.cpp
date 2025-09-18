# include <iostream>
using namespace std;
void generarTabla(int num){
    cout << "Esta es la tabla del: " << num << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << num << " x " << i << " = "<< num * i << endl;
    }
}
int main() {
int num;
cout << "ingrese un numero para ver su tabla" << endl;
cin >> num;
generarTabla(num);
return 0;
}
