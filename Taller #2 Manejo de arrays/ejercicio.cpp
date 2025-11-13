#include <iostream>
using namespace std;
// se podian declarar estas variables globales para que todas las funciones las usen sin necesidad de pasarlas como parametros
string* namess = 0; 
int* valuess = 0;
int numberSales = 0;

void getNewSales() // perimite crear una nueva lista dinamica con nombres y valores
{
    if (namess != 0 || valuess != 0) 
    { // se libera memoria solo si ya se habia asignado antes
        delete[] namess;
        delete[] valuess;
    }
    cout << "Ingrese el numero de ventas que desea registrar: ";
    cin >> numberSales;
    cin.ignore(); // limpiar el buffer y no usarlo hace que getline falle y no almacene nada en names[i], salta directamente a la siguiente iteracion

    namess = new string[numberSales]; 
    valuess = new int[numberSales];

    for (int i = 0; i < numberSales; i++) // aca se piden los datos de las ventas
    { 
        cout << "Ingrese el nombre de la venta #" << i + 1 << ": ";
        getline(cin, namess[i]); // uso de getline para permitir nombres con espacios
        cout << "Ingrese el valor de la venta #" << i + 1 << ": ";
        cin >> valuess[i];
        cin.ignore();
    }
}
void printSales() // mostrar ventas registradas
{ 
    if (numberSales == 0 || namess == 0) // if generico para chequear si hay ventas registradas, si no las hay se avisa y se retorna, el codigo es funcional sin este if pero asi es mas legible, se usa en todas las funciones posteriores
    {
        cout << "no hay ventas registradas aun." << endl;
    }
    else
    {
        cout << endl;
        cout << "Lista actual de ventas:" << endl;
        cout << endl;
        for (int i = 0; i < numberSales; i++) 
        {
            cout << "venta: " << namess[i] << " --->> valor: " << valuess[i] << endl;
        }
    }
}
void modifySale() // aca se modifica una venta existente
{
    if (numberSales == 0 || namess == 0) // if generico para chequear si hay ventas registradas
    {
        cout << "no hay ventas registradas aun." << endl;
    }
    else
    {
        string searchName;
        cout << "Ingrese el nombre de la venta que desea modificar: ";
        cin.ignore();
        getline(cin, searchName);
    
        bool modify = false;
        for (int i = 0; i < numberSales; i++) 
        {
            if (namess[i] == searchName) 
            {
                cout << "ingrese el nuevo valor para " << namess[i] << ": ";
                cin >> valuess[i];
                modify = true;
            }
            if (modify == false) 
            {
                cout << "no hay una venta con ese nombre" << endl;
            }
        }
    }
}
void findSale()  // permite buscar una venta por su nombre
{
    if (numberSales == 0  || namess == 0)   // if generico para chequear si hay ventas registradas
    {
        cout << "no hay ventas registradas " << endl;
    }
    else
    {
        string searchName;
        cout << "ingrese el nombre de la venta que desea buscar: ";
        cin.ignore();
        getline(cin, searchName);

        bool search = false;
        for (int i = 0; i < numberSales; i++) 
        {
            if (namess[i] == searchName) {
                cout << "venta encontrada en posicion " << i + 1 << " --->> valor: " << valuess[i] << endl;
                search = true;
            }
        }
        if (search == false) 
        {
            cout << "no se encontro esa venta  " << endl;
        }
    }
}
void salesInRange() // permite mostrar las ventas dentro de un rango de precios
{
    if (numberSales == 0 || namess == 0) // if generico para chequear si hay ventas registradas
    {
        cout << "no hay ventas registradas" << endl;
    }
    else
    {
        int min, max;
        cout << "ingrese el valor minimo: ";
        cin >> min;
        cout << "ingrese el valor maximo: ";
        cin >> max;

        cout << "ventas entre " << min << " y " << max << ":" << endl;
        bool show = false;

        for (int i = 0; i < numberSales; i++) 
        {
            if (valuess[i] >= min && valuess[i] <= max) 
            {
                cout << namess[i] << " --->> " << valuess[i] << endl;
                show = true;
            }
        }
        if (show == false) 
        {
            cout << "no hay ventas en ese rango de precios  " << endl;
        }

    }
}
void calculateTotal() // calcula el total de todas las ventas
{
    if (numberSales == 0 || namess == 0) // if generico para chequear si hay ventas registradas
    {
        cout << "no hay ventas registradas " << endl;
    }
    else 
    {
        int total = 0;
        for (int i = 0; i < numberSales; i++) 
        {
            total += valuess[i];
        }
        cout << "el total de todas las ventas es: " << total << endl;
    }
}
void run() 
{
    bool runningProgram = true;
    while (runningProgram) {
        cout << "-- -- -- -- -- -- --  " << endl;
        cout << "Por favor seleccione: " << endl;
        cout << "1. Registrar o reiniciar las ventas" << endl;
        cout << "2. Mostrar todas las ventas " << endl;
        cout << "3. Modificar una venta" << endl;
        cout << "4. Buscar una venta " << endl;
        cout << "5. Mostrar ventas dentro de un rango de precios" << endl;
        cout << "6. Calcular total de ventas  " << endl;
        cout << "7. Salir   " << endl;
        cout << "Ingrese una opcion: ";

        int option;
        cin >> option;

        switch (option) 
        {
            case 1:
                getNewSales();
                break;
            case 2:
                printSales();
                break;
            case 3:
                modifySale();
                break;
            case 4:
                findSale();
                break;
            case 5:
                salesInRange();
                break;
            case 6:
                calculateTotal();
                break;
            case 7:
                runningProgram = false;
                cout << "SALIENDOOOOOOOOOOOOOOOOOO " << endl;
                break;
            default:
                cout << "Opcion no valida, intente de nuevo  " << endl;
        }
    }
    // igual que al inicio, se libera la memoria asignada dinamicamente
    delete[] namess;
    delete[] valuess;
}
int main() 
{
    run();
    return 0;
}
