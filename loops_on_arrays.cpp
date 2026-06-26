#include<iostream>
using namespace std;
int main () {
    int size=5;
    int marks[size];
    
    //loops on arrays
    // asking user to enter value / assigning values
    for(int i=0; i< size ; i++ )
    {
        cin >> marks[i];
    }

    // output of values
    for(int i=0; i<size ; i++)
    {
        cout<< marks[i] << endl;
    }
    return 0;
}