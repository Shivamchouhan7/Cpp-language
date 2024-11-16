#include <iostream>
using namespace std;
// program to find average of three numbers 
int main(){
    float a,b,c;
    cout<<"Enter 1st num:";
    cin>>a;
    cout<<"Enter 2nd num:";
    cin>>b;
    cout<<"Enter 3rd num:";
    cin>>c;
    float average =(a+b+c)/3;
    cout <<"The average of this three number is "<<average;
    return 0;
}