#include <iostream>
#include <vector>
using namespace std;
/* Given a vector arr[] sorted in increasing order of n size
and an integer x,find if there exist a pair in the array whose sum is exactly x  */
int main(){
    int n,t;// t is for target value
    int pair=0;
    cout<<"Enter the size of vector :";
    cin>>n;
    vector <int> arr(n);
    for(int &ele:arr){
        cin>>ele;
    }
    cout<<"Enter the target value :";
    cin>>t;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t){
                pair++;
            }
        }
    }
    if (pair==0) {
        cout << "No pairs exist!" << endl;
    } else {
        cout << "Total pairs: " << pair << endl;
    }

return 0;
}