# include <iostream>
using namespace std;
void lettersCommon(){
    string word1, word2;
    cout << "ingrese dos palabras: " << endl;
    cin >> word1;
    cin >> word2;
    int counter = 0;
    for (size_t i = 0; i < word1.size(); i++)
    {
        for (size_t j = 0; j < word2.size(); j++)
        {
            if (word1[i] == word2[j])
            {
                counter++;
            }
            
        }
        
    }
    cout << "hay: " << counter << " letras en comun" ;
    
}
int main(){
    lettersCommon();
}