#include <iostream>
#include <vector>
using namespace std;
/*Check if we can partition the array into two subarray with
equal sum . More formally check that the prefix sum of a part
of the array is equal to the suffix sum of the rest of array.
*/
bool checkpartition(vector<int> &arr)
{
    int prefixsum = 0, suffixsum = 0, totalsum=0;
    for(int i=0;i<arr.size();i++){
        totalsum+=arr[i];
    }
    for(int i=0;i<arr.size();i++){
        prefixsum+=arr[i];
        suffixsum=totalsum-prefixsum;
        if(prefixsum==suffixsum){
            return true;
        }
    }
    return false;
    
}
int main()
{
    int n; // size
    cout << "Enter the size :";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements :-\n";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    if(checkpartition(arr)){
        cout<<"Yes, it is posible to partition \n";
    }
    else{
        cout<<"No, it is not posible to partition \n";

    }

    return 0;
}