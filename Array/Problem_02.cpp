#include <iostream>
using namespace std;
// To find number of Triplets in array whose sum is equal to the given value x
int main(){
    int arr[10]={3,0,5,4,7,2,6,8,9,1};
    int target_sum,triplets=0;
    cout<<"Enter the target sum :-";
    cin>>target_sum;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==target_sum){
                    triplets++;
                }
            }
        }
    }
    cout << "Total " << triplets << " triplets whose sum is " << target_sum << endl;
    return 0;
}