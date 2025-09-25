# include <iostream>
using namespace std;
void removeVouels(){
    string word;
    cout << "ingrese una palabra :" << endl;
    cin >> word;
    cout << "palabra sin vocales: " << endl;
    for  (size_t i = 0; i < word.size(); i++)
    {
        if (word[i] == 'a' ||word[i] == 'e' ||word[i] == 'o' ||word[i] == 'i' ||word[i] == 'u')
        {
            cout <<"";
        }
        else
        {
            cout << word[i];
        }
    }
}
int main(){
    removeVouels();
    return 0;

}