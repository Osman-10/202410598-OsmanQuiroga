    #include <iostream>
    using namespace std;

int main() {
    int numeros[6];
    int mayor, menor;
    float suma = 0;

    for (int i = 0; i < 6; i++) 
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    mayor = menor = numeros[0]; // Inicializar mayor y menor
    for (int i = 1; i < 6; i++) 
    {
        if (numeros[i] > mayor) 
        {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) 
        {
            menor = numeros[i];
        }
    }

    cout << "\nPromedio: " << suma / 6 << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}
