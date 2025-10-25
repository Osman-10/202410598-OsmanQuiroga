
#include <iostream>
using namespace std;
void countNumberEven()
{
    int values[15] = {2, 6, 9, 12, 15, 18, 21, 24, 56, 87, 90, 23, 65, 12, 55};
    int counter = 0;
    for (int i = 0; i < 15; i++)
    {
        if (values[i] % 2 == 0)
        {
            counter++;
        }
    }
    cout << "Hay " << counter <<" numeros pares "<< endl;
}
int main()
{
    countNumberEven();
    return 0;

}