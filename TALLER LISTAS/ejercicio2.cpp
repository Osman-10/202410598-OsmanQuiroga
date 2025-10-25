
#include <iostream>
using namespace std;
void calculateAverageGrade()
{
    float grades[9] = {3.8, 4.0, 2.2, 3.4, 4.9, 5.0, 3.4, 2.9, 1.0 };
    float sum = 0;
    for (int i = 0; i < 9; i++)
    {
        sum += grades[i];
    }
    float average = sum / 9;
    cout << "El promedio es: " << average << endl;
}
int main()
{
    calculateAverageGrade();
    return 0;
}