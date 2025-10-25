#include <iostream>

using namespace std;

bool validateLength(string userName)
{
    int letters = 0;
    for (int i = 0; i < userName.size(); i++)
    {
        if (userName.size()>=6 && userName.size()<=12 )
        {
            return true;
        }
    }
    return false;
    
}

bool initialLetter(string userName)
{
    if (userName.size() == 0)
        return false;

    char c = userName[0];
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return true;
    return false;
}

bool withoutSpace(string userName)
{
    for (int i = 0; i < userName.size(); i++) 
    {
        if (userName[i] == 32)
        {
            return false;
        }
    }
    return true;

}

void verifyUserName()
{
    string userName;
    cout << "Ingrese su nombre de usuario: ";
    cin >> userName; 

    if (validateLength (userName) && initialLetter(userName) && withoutSpace(userName) )
    {
    cout<<"nombre valido" <<endl;
    }
    else 
    {
        cout<<"intenta con otro nombre"<< endl;
    }
}
    

int main()
{
    verifyUserName();
    return 0;
}

