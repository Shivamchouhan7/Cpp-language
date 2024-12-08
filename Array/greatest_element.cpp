#include <iostream>
using namespace std;
// To find greatest element of integer array
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter the elements of array:-"<<endl;
    int array[n];
    for(int &element:array){
        cin>>element;
    }
    int temp=array[0];
    for(int i=1;i<n;i++){
       if(temp<array[i]){
        temp=array[i];
       }
    }
    cout<<"Greatest element in your array is :"<<temp<<endl;
    return 0;
}