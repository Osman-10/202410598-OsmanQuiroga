# include <iostream>
using namespace std;
using used = string ;
    
int main(){
    used name;
    cout << "ingrese su nombre completo: "<< endl;
    getline(cin,name);
    cout << "tu nombre es: "<< name << endl;
    return 0;
    
}