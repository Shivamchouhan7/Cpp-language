#include <iostream>
#include<climits>
using namespace std;
/* Finding 2nd largest element in array*/
int main(){
    int s_largest=INT_MIN,largest=INT_MIN;
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    for(int ele:arr){
        if( ele>largest){
            s_largest=largest;
            largest=ele;

        }
        else if(ele>s_largest && ele!=largest){
            s_largest=ele;
        }
    }
    if(s_largest!=INT_MIN){
        cout<<"Second largest element is :"<<s_largest;
    }
    else{
        cout<<"NO second largest element exist";
    }
    return 0;
}