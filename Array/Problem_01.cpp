#include <iostream>
using namespace std;
// To find total pair in array whose sum is equal to the given value x
int main(){
    int arr[10]={3,0,5,4,7,2,6,8,9,1};
    int target_sum,pairs=0;
    cout<<"Enter the target sum :-";
    cin>>target_sum;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]+arr[j]==target_sum){
                pairs++;
            }
        }
    }
    cout<<"Total "<<pairs<<" pairs whose sum is "<<target_sum;
    return 0;
}