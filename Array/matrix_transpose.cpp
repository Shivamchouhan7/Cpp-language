#include <iostream>
using namespace std;
// Transpose of matrix

int main(){
    int r1,c1;
    cout<<"Enter size of 1st matrix :-\n";
    cin>>r1;
    cout<<"X"<<endl;
    cin>>c1;
    int A[r1][c1];
    int B[c1][r1];
    
    // 1st matrix input
    cout<<"Enter matrix elements :-\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    // transpose of matrix
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            B[i][j]=A[j][i];
        }
    }
    // final matrix 
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
        cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}