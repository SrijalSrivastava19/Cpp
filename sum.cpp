#include <iostream>
using namespace std;
int main(){
    int num=0 , sum=0;
    cout <<"Enter the number : " <<endl;
    cin>>num;
    for(int i=1; i<=num ; i++)
    {
        cout << i << " ";
        sum = sum+i;

    }
    
    cout << "Sum = "<< sum << endl;
    return 0;
}