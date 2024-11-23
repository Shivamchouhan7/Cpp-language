#include <iostream>
using namespace std;
/*Inverted Triangle pattern like
****
***
**
* 
      */
int main(){
    int n;
    cout << "Enter size (line) for triangle pattern : ";//enter 4 for above example triangle 
    cin>>n;
    for (int i = n; i>0; i--)
    {
        for(int j=0;j<i;j++){
        cout<<"*";
    }
    
    cout<<endl;
        
    }
    

    return 0;
}