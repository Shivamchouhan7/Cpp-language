#include <iostream>
using namespace std;
//Triangle Pattern 
int main(){
    int a; 
    cout<<"Enter p :";
    cin>>a;
    for(int i=0;i<=a;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}