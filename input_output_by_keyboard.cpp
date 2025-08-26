#include <iostream>
using namespace std; // para no usar std::cout y std::cin cada vez

int main() {
    string userName, lastName;   // declaracion de variables
    int userAge;

    cout << "Please enter your name: ";    // salida de datos
    cin >> userName;            // entrada de datos 

    cout << "Hello " << userName << '\n';     // salida de datos con uso de variables

    cout << "Please enter your last name: ";   
    cin >> lastName;

    cout << "Your last name is: " << lastName << '\n';

    cout << "Please enter your age: ";
    cin >> userAge;

    cout << "You are: " << userAge << " years old\n";

    return 0;
}