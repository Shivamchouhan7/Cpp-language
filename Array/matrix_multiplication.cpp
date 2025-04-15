#include <iostream>
using namespace std;

/*Multiplication of two matrix*/

int main(){
// 1st Matrix 
    int r1,c1;
    cout<<"Enter Size of 1st matrix :\n";
    cin>>r1;
    cout<<"X"<<endl;
    cin>>c1;
    
    int A[r1][c1];
    cout<<"Enter the elements of 1st matrix :\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
// 2nd Matrix  
    int r2,c2;
    cout<<"Enter Size of 2nd matrix :\n";
    cin>>r2;
    cout<<"X"<<endl;
    cin>>c2;

    int B[r2][c2];
    cout<<"Enter the elements of 2nd matrix :\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
// result Matrix 
int C[r1][c2];

// condition for matrix multiplication 
if (c1!=r2){
    cout<<"Matrix multiplication is not possible ...";
}
else{
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for (int k=0;k<c1;k++){
                value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;
          
        }

    }
}
// Printing result matrix

cout<<"Final matrix is :-\n";
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        cout<<C[i][j]<<endl;
    }
    
}

    return 0;
}