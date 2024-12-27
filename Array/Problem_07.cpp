#include <iostream>
using namespace std;
/* To rotate the given array "a" by  'k' steps . k can be greater than n (size of array) */
void rotate(int a[],int k,int size){
    k=k%size; // it handles cases when k > size of array
    int temp[size];
    int j=0;
    for(int i=size-k;i<size;i++){
        temp[j++]=a[i];
    }
    for(int i=0;i<size-k;i++){
        temp[j++]=a[i];
    }
    for(int i=0;i<size;i++){
        a[i]=temp[i];
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    rotate(arr,7,5);
    return 0;
}