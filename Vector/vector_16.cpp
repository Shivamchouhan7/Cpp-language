#include <iostream>
#include <vector>
using namespace std;
/* Given a vector arr[] sorted in increasing order of n size
and an integer x,find if there exist unique pair in the array whose sum is exactly x  */
int main(){
    int n,t;// t is for target value
    int pair=0;
    cout<<"Enter the size of vector :";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter elements of vector :\n ";
    for(int &ele:arr){
        cin>>ele;
    }
    cout<<"Enter the target value :";
    cin>>t;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==t){
            pair++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<t){
            i++;
        }
        else{
            j--;
        }
    }
    if (pair==0) {
        cout << "No pairs exist!" << endl;
    } else {
        cout << "Total pairs: " << pair << endl;
    }

return 0;
}