#include <iostream>
using namespace std;
int main (){
    char ch;
    cout<< " Enter your character : "<< endl;
    cin>> ch;
    'a' < ch <'z';
    if (ch >= 'a' && ch <= 'z' ) {
        cout<< " Character is a lowercase letter" << endl;
    }
    else if ( ch >= 'A' && ch <= 'Z')
    {
        cout<< " Character is an uppercase letter" << endl; 
    }
    else 
    {
        cout << "Character is not a letter" << endl;
    }
    return 0;
    
}