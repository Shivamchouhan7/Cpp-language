#include <iostream>
#include <vector>
using namespace std;
/* Given a vector arr[] sorted in increasing order of n size
and an integer x,find if there exist a pair in the array whose sum is exactly x (using two pointer technique) */
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
    int left=0,right=n-1;
    cout<<"Enter the target value :";
    cin>>t;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==t){
            pair++;
            cout<<" Pair "<< pair<<" = ("<<arr[left]<<","<<arr[right]<<")\n";
            left++;
            right--;
        }
        else if(sum<t){
            // if sum is less then target value, increase the sum
            left++;
        }
        else{
            // if sum is greaater then target value, decrease the sum
            right--;
        }
    }
    if (pair==0) {
        cout << "No pairs exist!" << endl;
    } else {
        cout << "Total pairs found : " << pair << endl;
    }
    

return 0;
}