#include <iostream>
using namespace std;
/* To rotate the given array "a" by  'k' steps . k can be greater than n (size of array) */
void rotate(int a[],int k,int size){
    k=k%size; // it handles cases when k > size of array
    for(int i=0;i<k;i++){
        int last=a[size-1];
        for(int j=size-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=last;
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    rotate(arr,7,5);
    return 0;
}