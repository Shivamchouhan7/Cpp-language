#include <iostream>
using namespace std;
/*Pyramid pattern like :-
   *
  ***
 *****
******* 
      */
int main(){
    int n;
    cout << "Enter size (line) for Pyramid pattern : ";//enter 5 for above example triangle 
    cin>>n;
    for (int i = 0; i < n; i++)
    {for(int j=1;j<=n-i-1;j++){
        cout<<" ";
    }
    for(int k=1;k<=(2*i-1);k++){
        cout<<"*";
    }
    cout<<endl;
        
    }
    

    return 0;
}