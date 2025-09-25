#include <iostream>
using namespace std;
int main(){
    int x = 100;
    int y = 20;
    int z = 30;
    int t = 40;
    cout << "el menor es: "<< min(x, min(y,min(z,t))) << endl;
    return 0;

}
