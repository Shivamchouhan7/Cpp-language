#include <iostream>
using namespace std;
/* Numeric pyramid like:-
    1
   121
  12321
 1234321
123454321
*/
int main(){
    int n;
    cout<<"Enter n :";//Enter 5 for above example
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}