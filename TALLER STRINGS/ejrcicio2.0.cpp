# include <iostream>
using namespace std;
void jajjaj(){
    string nothing;
    cout << "ingrese una palabra: "  << endl;
    cin >> nothing;
    for (size_t i = 0; i < nothing.size(); i++)
    {
        if (i % 2 != 0 && islower(nothing[i]))
        {
            cout << (char)toupper(nothing[i]);
        }
        else if (i % 2 == 0 && isupper(nothing[i]) )
        {
            cout << (char)tolower(nothing[i]);
        }
        else
        {
            cout << nothing[i];
        }
    }

    
}
int main (){
    jajjaj();
    
}