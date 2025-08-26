# include <iostream>
using namespace std;
int main (){
    int inputValue1, inputValue2;
    int sum, rest, mult, div, mod;
    cout << "enter two integer values: ";
    cin >> inputValue1;
    cin >> inputValue2;

    sum = inputValue1 + inputValue2;
    rest = inputValue1 - inputValue2;
    mult = inputValue1 * inputValue2;
    div = (inputValue2 != 0) ? (inputValue1 / inputValue2) : 0;
    mod = (inputValue2 != 0) ? (inputValue1 % inputValue2) : 0;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << rest << endl;
    cout << "Product: " << mult << endl;
    cout << "Quotient: " << div << endl;
    cout << "Remainder: " << mod << endl;
}