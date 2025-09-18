# include <iostream>
using namespace std;

void mostrarMenu(){
int user;
while (user != 0){
cout << "elija una operacion: 1 para sumar o 2 para restar: " << endl;
cin >> user;
}
}

void operaciones() {
int user ,n1,n2;
if (user == 1){
cout << "ingresa dos números para sumarlos: "<< endl;
cin >> n1;
cin >> n2;
cout << n1 + n2 << endl;
}
else if (user == 2){
cout << "ingresa dos números para restarlos: "<< endl;
cin >> n1;
cin >> n2;
cout << n1 - n2 << endl;
}
else {
cout << "opción no valida" << endl;
}

}
int main() {
void mostrarMenu();
void operaciones();

}
