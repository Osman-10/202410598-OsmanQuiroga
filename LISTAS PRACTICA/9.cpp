#include <iostream>
using namespace std;

int main() {
    string productos[4] = {"Pan", "Leche", "Arroz", "Queso"};
    float precios[4] = {2.5, 4.0, 3.2, 5.8};

    int idxMayor = 0, idxMenor = 0;

    for (int i = 1; i < 4; i++) {
        if (precios[i] > precios[idxMayor]) idxMayor = i;
        if (precios[i] < precios[idxMenor]) idxMenor = i;
    }

    cout << "Producto más caro: " << productos[idxMayor] << " ($" << precios[idxMayor] << ")\n";
    cout << "Producto más barato: " << productos[idxMenor] << " ($" << precios[idxMenor] << ")\n";

    return 0;
}
