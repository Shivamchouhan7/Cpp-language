#include <iostream>
using namespace std;
// program to find area of rectangle 
int main(){
    float length ,width;
    cout<<"Enter the length of rectangle :";
    cin>>length;
    cout<<"Enter the width of rectangle :";
    cin>>width;
    float area = length*width; // formula to calculate area 
    cout<<"Area of rectangle having length "<<length <<" and width "<<width <<" is "<<area<<endl;
    return 0;
}