
# include <iostream>
using namespace std;

void showProductsValor ()
{
    string products[5] = {"Carne", "Leche", "Queso", "Agua", "Pollo"}; 
    float prices[5] = {1500, 3200, 4800, 1000, 5000};
    cout << "Los productos y precios son" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << products[i] << " vale $" << prices[i]<< endl;
        
        
    }
    
    
}
int main()
{
    showProductsValor();
    return 0;
}