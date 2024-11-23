#include <iostream>
using namespace std;
/* Numeric square pattern like :-
1 2 3 4 5 6 7
2 3 4 5 6 7 1
3 4 5 6 7 1 2
4 5 6 7 1 2 3
5 6 7 1 2 3 4
6 7 1 2 3 4 5
7 1 2 3 4 5 6
*/
int main(){
    int n;
    cout<<"Enter side(number) :";//enter 7 for above example
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j<<" ";
            
        }for(int j=1;j<=(i-1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}