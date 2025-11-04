#include <iostream>
using namespace std;

int main() {
    string nombres[4] = {"Juan", "Ana", "Luis", "Sofia"};

    cout << "Nombres en orden inverso:\n";
    for (int i = 3; i >= 0; i--)
        cout << nombres[i] << endl;

    return 0;
}
