#include <iostream>
using namespace std;
// Hollow Rectangle Pattern
int main(){
    int length,width;
    cout<<"Enter the Width of rectangle :";
    cin>>width;
    cout<<"Enter the length of rectangle :";
    cin>>length;
    for(int i=0;i<width;i++){
        for(int j=0;j<length;j++){
            if(i==0||j==0||i==width-1||j==length-1){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}