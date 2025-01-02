#include <iostream>
#include <vector>
using namespace std;
/*Give an integer array arr return the 
prefix sum/running sum in the same array without creating new array */
int main(){
    int n; //size
    cout<<"Enter size of array :";
    cin>>n; 
    vector<int> arr(n);
    cout<<"Enter the elements of array :-\n";
    for(int &ele:arr){
        cin>>ele;
    }
    int temp=0;
    cout<<"Final array :-\n";
    for(int i=0;i<arr.size();i++){
        temp+=arr[i];
        arr[i]=temp;
        cout<<arr[i]<<" ";
    }

    return 0;
}