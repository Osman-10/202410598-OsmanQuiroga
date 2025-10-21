# include <iostream>
using namespace std;

int main(){
    int number;
    int factorial = 1;

    cout << "escriba el numero que desea encontar su factorial: " << endl;
    cin >> number;
    for (int i = 2; i <= number ;i++)
    {
        factorial *= i; // Multiply factorial by i
    }
    cout <<"factorial es: " << factorial<< endl;
    return 0;
    
}