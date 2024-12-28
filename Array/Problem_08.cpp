#include <iostream>
using namespace std;
/* Sort an array consisting 0's and 1s*/
int main(){
    int n,count=0;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array(0's & 1's only):-\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=0 &&arr[i]!=1){
            cout<<"Array contain invalid element \n";
            return 1;
        }
        if(arr[i]==0){
            count++;
        }
    }
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    for(int i=count;i<n;i++){
        arr[i]=1;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}