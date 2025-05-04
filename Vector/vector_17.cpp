#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Given a boolean 2D array , where each row is sorted .Find the row with the maximum number of 1s

int main(){
    // input 
    int n,m;
    cout<<"Enter row of vector:";
    cin>>n;
    cout<<"Enter column of vector:";
    cin>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        cout<<"Enter the elements of row : "<<i<<endl;
        for(int j=0;j<m;j++)
            cin>>vec[i][j];
    }
        
    

    int row=-1;
    //int col=m;
    int prev=INT_MAX;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            
            if(vec[i][j]==0){
                count++;
            }
            else{
                break;
            }
        }
        if(count<prev){
            prev=count;
            row=i;
        }

        
    }
    cout << "\nRow with the most 1s is: " << row << endl;
    cout << "Elements of that row: ";
    for(int i=0;i<m;i++){
        cout<<vec[row][i];
    }
    return 0;
}