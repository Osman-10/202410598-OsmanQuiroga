

#include <iostream>
using namespace std;

void showEmployeeNames()
{
    string employees[4] = {"Juan", "Carlos", "Maria", "Jose"};
    cout << "Nombres de los empleados:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << employees[i] << endl;
    }
    
}
int main()
{
    showEmployeeNames();
    return 0;
    
}
