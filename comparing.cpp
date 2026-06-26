#include<iostream>
#include<climits>
using namespace std;
int main (){
    int nums[]={5,15,22,-22,1,-20};
    int size=6;
    int smallest =INT_MAX;
    int largest=INT_MIN;
    for(int i=0; i<size ; i++)
    {
        if (nums[i] < smallest){
            smallest = nums[i];
        }
    }
    for(int i=0 ; i<size ; i++)
    {
        if(nums[i]>largest)
        {
            largest=nums[i];
        }
    }
    cout<< " The largest number is :" << largest << endl;
    cout<< " The smallest number is : "<< smallest << endl;
    return 0;
}
