#include <iostream>
#include <vector>
using namespace std;
/* given two array of size 'm' and 'n' sorted in
incresing order .Merge this two array in single sorted array of size 'm+n'*/
// 1 2 3    4 5 6
int main()
{
    int m, n;
    cout << "enter size of 1st array :";
    cin >> m;
    cout << "enter size of 2nd array :";
    cin >> n;
    vector<int> arr1(m);
    vector<int> arr2(n);
    cout << "Enter the elements of 1st array in increasing order :-\n";
    for (int &ele : arr1)
    {
        cin >> ele;
    }
    cout << "Enter the elements of 2nd array in increasing order:-\n";
    for (int &ele : arr2)
    {
        cin >> ele;
    }
    vector<int> temp(m + n, 0);
    int i = 0, j = 0, k = 0;
    while(j<m && k<n){
        if (arr1[j] <= arr2[k]){
        temp[i++] = arr1[j++];
        }
        else{
        temp[i++] = arr2[k++];
        }
    }
    while (j < m){
        temp[i++] = arr1[j++];
    }
    while (k < n){
        temp[i++] = arr2[k++];
    }
    for (int ele : temp){
        cout << ele << " ";
    }
    return 0;
}