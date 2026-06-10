#include<iostream>
using namespace std;
int main (){
    int marks;
    cout<<" Enter marks : "<< endl;
    cin>> marks;
    if (marks>90)  {
        cout<<" grade A+"<< endl;
    }
    else if (marks>80 && marks<=90) {
        cout<<" grade A "<< endl;
    }
    else if (marks>70 && marks<=80) {
        cout<<" grade B "<< endl;
    }
    else if (marks>60 && marks<=70) {
        cout<<" grade C "<< endl;
    }
    else if (marks>50 && marks<=60) {
        cout<<" grade D "<< endl;
    }
    else if (marks>40 && marks<=50) {
        cout<<" grade E "<< endl;
    }
    else {
        cout<<" grade F "<< endl;
    }
    return 0;
}
