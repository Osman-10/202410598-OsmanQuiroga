#include <iostream>
using namespace std;

// Muestra el menú principal
int getUserAction() {
    int userAction;
    cout << "-----------------------------" << endl;
    cout << "Seleccione una opción:" << endl;
    cout << "1. Crear o reemplazar lista de ventas." << endl;
    cout << "2. Imprimir lista de ventas." << endl;
    cout << "3. Modificar una venta." << endl;
    cout << "4. Buscar una venta por nombre." << endl;
    cout << "5. Mostrar ventas dentro de un rango de valores." << endl;
    cout << "6. Calcular el total de ventas." << endl;
    cout << "7. Salir." << endl;
    cout << "Ingrese una opción: ";
    cin >> userAction;
    cout << "-----------------------------" << endl;
    return userAction;
}

// Crea una nueva lista dinámica con nombres y valores
void getNewSales(string*& names, int*& values, int& size) {
    if (names != nullptr) {
        delete[] names;
        delete[] values;
    }

    cout << "Ingrese la cantidad de ventas a registrar: ";
    cin >> size;
    cin.ignore();

    names = new string[size];
    values = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Nombre de la venta #" << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Valor de la venta #" << i + 1 << ": ";
        cin >> values[i];
        cin.ignore();
    }

    cout << "✅ Lista creada correctamente." << endl;
}

// Imprime las ventas actuales
void printSales(string names[], int values[], int size) {
    if (size == 0) {
        cout << "⚠ No hay ventas registradas." << endl;
        return;
    }

    cout << "Lista actual de ventas:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Posición " << i + 1 << " -> " << names[i] << " ($" << values[i] << ")" << endl;
    }
}

// Modifica una venta existente
void modifySale(string names[], int values[], int size) {
    if (size == 0) {
        cout << "⚠ No hay ventas registradas." << endl;
        return;
    }

    printSales(names, values, size);

    int position;
    cout << "Ingrese la posición de la venta a modificar: ";
    cin >> position;

    if (position < 1 || position > size) {
        cout << "❌ Posición inválida." << endl;
        return;
    }

    cout << "Nuevo valor para \"" << names[position - 1] << "\": ";
    cin >> values[position - 1];
    cout << "✅ Venta modificada correctamente." << endl;
}

// Busca una venta por nombre
void findSale(string names[], int values[], int size) {
    if (size == 0) {
        cout << "⚠ No hay ventas registradas." << endl;
        return;
    }

    string search;
    cout << "Ingrese el nombre de la venta a buscar: ";
    cin.ignore();
    getline(cin, search);

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (names[i] == search) {
            cout << "✅ Venta encontrada -> " << names[i] << ": $" << values[i] << endl;
            found = true;
        }
    }

    if (!found) cout << "❌ No se encontró una venta con ese nombre." << endl;
}

// Muestra ventas dentro de un rango
void showSalesInRange(string names[], int values[], int size) {
    if (size == 0) {
        cout << "⚠ No hay ventas registradas." << endl;
        return;
    }

    int min, max;
    cout << "Ingrese valor mínimo: ";
    cin >> min;
    cout << "Ingrese valor máximo: ";
    cin >> max;

    bool found = false;
    cout << "Ventas entre $" << min << " y $" << max << ":" << endl;
    for (int i = 0; i < size; i++) {
        if (values[i] >= min && values[i] <= max) {
            cout << names[i] << " -> $" << values[i] << endl;
            found = true;
        }
    }

    if (!found) cout << "❌ No hay ventas dentro del rango indicado." << endl;
}

// Calcula el total de todas las ventas
void calculateTotal(int values[], int size) {
    if (size == 0) {
        cout << "⚠ No hay ventas registradas." << endl;
        return;
    }

    int total = 0;
    for (int i = 0; i < size; i++) {
        total += values[i];
    }

    cout << "💰 Total de todas las ventas: $" << total << endl;
}

// Controlador principal
void run() {
    bool continueRunning = true;
    string* names = nullptr;
    int* values = nullptr;
    int size = 0;

    while (continueRunning) {
        int option = getUserAction();

        switch (option) {
        case 1:
            getNewSales(names, values, size);
            break;
        case 2:
            printSales(names, values, size);
            break;
        case 3:
            modifySale(names, values, size);
            break;
        case 4:
            findSale(names, values, size);
            break;
        case 5:
            showSalesInRange(names, values, size);
            break;
        case 6:
            calculateTotal(values, size);
            break;
        case 7:
            continueRunning = false;
            delete[] names;
            delete[] values;
            cout << "👋 Programa finalizado." << endl;
            break;
        default:
            cout << "❌ Opción no válida. Intente de nuevo." << endl;
        }
    }
}

int main() {
    run();
    return 0;
}