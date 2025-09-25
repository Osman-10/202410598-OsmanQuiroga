# include <iostream>
using namespace std;
bool palindromo (string word){
    int a = 0 ;
    int b = word.size()-1;
    for (int i = 0; i < (int)word.size(); i++)
    {
        if ( word[a] == word[b] )
        {
            a++;
            b--; 
        }
        else
        {
            return false;
        }  
    }
    return true;  
}
int main(){
    string word1,word2;
    cout << "ingrese dos palabra para saber si es palindroma: " << endl;
    cin >> word1;
    cin >> word2;
    if (palindromo(word1))
    {
        cout<< word1 <<" es palindromo " << endl;
    }
    else
    {
        cout << word1 << " no es palindromo" << endl;
    }
    if (palindromo(word2))
    {
        cout << word2 <<" es palindromo " << endl;
    }
    else
    {
        cout << word2 << " no es palindromo" << endl;
    }

    return 0;
}
