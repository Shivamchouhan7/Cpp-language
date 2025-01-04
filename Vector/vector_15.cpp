#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/* Given a vector arr[] sorted in increasing order. Return 
an array of square of squares of each number 
sorted in increasing order . Where size of vector 1<size<101  */
int main(){
    int n;
    cout<<"Enter the size of vector :";
    cin>>n;
    if (n <= 1 || n >= 101) {
        cout << "Invalid size! Size must be between 2 and 100." << endl;
        return 1;
    }
    vector <int> arr(n);
    cout<<"Enter "<<n<<" elements in sorted form :\n";
    for(int &ele:arr){
        cin>>ele;
    }
    vector<int> final(n);
    int i,left=0,right=n-1;
    for(i=n-1;i>=0;i--){
        
        if (abs(arr[left]) > abs(arr[right])) {
            final[i] = arr[left] * arr[left];
            left++;
        } else {
            final[i] = arr[right] * arr[right];
            right--;
        }
    }
    cout << "Sorted squares of the elements: ";
    for(int ele:final){
        cout<<ele<<" ";
    }
    

return 0;
}