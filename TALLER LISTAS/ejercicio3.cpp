
# include <iostream>
using namespace std;

void findMaxValue()
{
    int numbers[10] = {50, 25, 7, 30, 15, 22, 56, 12, 67, 90};
    int maxValue = 0; 
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] > maxValue)
        {
            maxValue = numbers[i];
        }
    }
    cout << "El valor maximo es: " << maxValue << endl;
}
int main()
{
    findMaxValue();
    return 0;
}