#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
/* To rotate the given array "a" by  'k' steps . k can be greater than n (size of vector) */
int main(){
    int k=12;
    vector<int> v{1,2,3,4,5,6,7,8,9};
    int n = v.size();
    // manage if k > n
    k = k % n;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int ele:v){
        cout<< ele<<" ";
    }

    return 0;
}