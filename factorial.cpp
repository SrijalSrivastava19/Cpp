#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter the number "<< endl;
    cin>> n;
    long long factorial = 1;
    for ( int i =1 ; i<=n; i++)
    {
        factorial = factorial*i ;
    }
    cout<< "Factorial of number " <<n<< " is  " <<factorial <<endl;
    return 0;

}