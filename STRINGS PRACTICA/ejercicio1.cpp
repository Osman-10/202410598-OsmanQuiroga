# include <iostream>
using namespace std;

int counterVouels(string frase) {
    int counter = 0;
    for (size_t i = 0; i < frase.size(); i++)
    {
        if (frase[i] == 'a' ||frase[i] == 'e' ||frase[i] == 'i' ||frase[i] == 'o' ||frase[i] == 'u')
        {
            counter++;
        }
        
    }
    return counter;
    
}
int main(){
    string fra;
    cout << "ingrese una frase" << endl;
    cin >> fra;
    int count = counterVouels( fra);
    cout << "hay " << count << " vocales";
    return 0;
    
}