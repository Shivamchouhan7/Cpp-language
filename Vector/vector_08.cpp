#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/*given an integer array arr sorted in non decreasing order
return an array of the squares of each number sorted in
non decreasing order*/
int main()
{
    vector<int> arr{-7, -3, 2, 5, 6};
    vector<int> temp(arr.size());
    int l = 0, r = (arr.size() - 1), i = arr.size()-1;
    while (l <= r)
    {
        if (abs(arr[l]) > abs(arr[r]))
        {
            temp[i--] = arr[l]*arr[l];
            l++;
        }
        else
        {
            temp[i--] = arr[r]*arr[r];
            r--;
        }
    }
    
    for(int e:temp){
        cout<<e<<" ";
    }

    return 0;
}