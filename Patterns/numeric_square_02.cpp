#include <iostream>
using namespace std;
/* Numeric square pattern like :-
12121
21212
12121
21212
*/
int main(){
    int row,column;
    //Enter row=4 and column=5 for above example
    cout<<"Enter row :";
    cin>>row;
    cout<<"Enter column :";
    cin>>column;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
    return 0;
}