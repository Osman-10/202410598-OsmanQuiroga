# include <iostream>
using namespace std;

void invertLetters(){
    string word;
    cout << "ingrese una palabra: "<< endl;
    cin >> word;
    int rest32 = 'a' - 'A';
    for (int i = 0; i < word.size(); i++)
    {
        if (i % 2 == 0 && word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = word[i] + rest32;
        }
        else if (i % 2 != 0 && word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - rest32;
            
        }
        
        
    }
    cout << word;
    
}
int main(){
    invertLetters();
    return 0;
}