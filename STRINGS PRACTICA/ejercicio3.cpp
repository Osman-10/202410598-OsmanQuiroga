# include <iostream>
using namespace std;
int counterMayus(string cadena)
{
    int count = 0;
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] >= 65 && cadena[i] <= 90)
        {
            count++;
            
        }
        
    }
    return count;
    

}
int counterMinus(string cadena)
{
    int count = 0;
    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] >= 97 && cadena[i] <= 122)
        {
            count++;
            
        }
        
    }
    return count;
}
void nothing()
{
    string fra;
    cout << "ingrese una palabra " << endl;
    cin >> fra;
    int count1 = counterMayus(fra);
    cout << "hay " << count1 << " mayus" << endl;;
    int count2 = counterMinus(fra);
    cout << "hay " << count2 << " minus";


}
    
int main(){
    nothing();
    return 0;
    
}