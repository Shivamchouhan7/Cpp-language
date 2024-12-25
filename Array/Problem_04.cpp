#include <iostream>
using namespace std;
/*Find the unique element in given array in which all element repeted twice 
with one value being unique*/
int main(){
    // taking an array as an example 
    int arr[9]={1,2,3,4,5,4,3,2,1};
    int unique=0;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]==arr[j]){
                if(arr[i]!=-1 && arr[j]!=-1){
                    arr[i]=arr[j]=-1;
                }
                else{
                    arr[i]=arr[j]=0;
                } 
            }
        }
    }
    for(int ele :arr){
        if(ele!=-1 && ele!=0){
            unique=ele;
            break;
        }
    }
    cout<<"Unique element is :"<<unique;
    /* Using XOR operator for finding a unique element is preferred because of its complexity 
   as well as it doesn't change the original array */

    return 0;
}