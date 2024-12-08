#include <iostream>
using namespace std;
// Searching element in array( print -1 if not found)
int main(){
    int array[6]={1,2,3,7,8,9};
    int element,flag=-1;
    cout<<"Enter element you want to search :";
    cin>>element;

    for(int i=0;i<6;i++){
        if(element==array[i]){
            flag=1;
            cout<<"Element found at index "<<i<<endl;
            break;
        }
    }
    cout<<flag;
    return 0;
}