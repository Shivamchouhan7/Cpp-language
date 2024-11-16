#include <iostream>
using namespace std;
// basic sum program for two numbers by taking input from user 
int main(){
    int a,b;//declayring variables  
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    int sum = a+b;
    cout<<"the sum of "<<a<<" and "<< b<<" is "<<sum<<endl;
    return 0;
}