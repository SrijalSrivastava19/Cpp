#include <iostream>
using namespace std;
int main(){
    int age ;
    cout<<" Enter your age : "<< endl;
    cin>> age;
    if(age>+18)
    {
        cout<<"You are eligble to vote" << endl;

    }
    else 
    {
        cout<<"You aren't eligble to vote "<< endl;

    }
    return 0;
}