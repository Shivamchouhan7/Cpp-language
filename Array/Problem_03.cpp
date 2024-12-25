#include <iostream>
using namespace std;
/*Find the unique element in given array in which all element repeted twice 
with one value being unique(using XOR operator)*/
int main(){
    // taking an array as an example 
    int arr[9]={1,2,3,4,5,4,3,2,1};
    int unique=0;
    for(int ele : arr){
        unique=unique^ele;
    }
    cout<<"Unique element is :"<<unique;
    return 0;
}