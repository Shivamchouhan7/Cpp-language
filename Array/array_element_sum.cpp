#include <iostream>
using namespace std;
// program to find sum of all elements of array
int main(){
    int array[5]={5,3,4,8,10};
    int size=sizeof(array)/sizeof(array[0]);// for finding size of array
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout <<"Sum of all elements of array is :"<<sum;
    return 0;
}