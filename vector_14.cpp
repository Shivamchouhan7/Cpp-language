#include <iostream>
#include <vector>
using namespace std;
/* Given a vector arr[] sorted in increasing order of n size
and an integer x,find if there exist a pair in the array 
whose absolute difference is exactly x (using two pointer technique) */
int main(){
    int n,t;// t is for target value
    int pair=0;
    cout<<"Enter the size of vector :";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter "<<n<<" elements in sorted form :\n";
    for(int &ele:arr){
        cin>>ele;
    }
    int left=0,right=1;
    cout<<"Enter the target value :";
    cin>>t;
    while(right<n){
        int difference=abs(arr[left]-arr[right]);
        if(difference<t){
            // Increase difference by moving the right pointer
            right++;
        }
        else if (difference>t){
            // Decrease difference by moving the left pointer
            left++;
        }
        else{
            pair++;
            cout<<"Pair "<<pair<<" = |("<<arr[left]<<"-"<<arr[right]<<")| = "<<t<<endl;
            left++;
            right++;
        }
    }
    if (pair==0) {
        cout << "No pairs exist!" << endl;
    } else {
        cout << "Total pairs found : " << pair << endl;
    }
    

return 0;
}