#include <iostream>
#include <vector>
using namespace std;
/* Sort a vector consisting 0's and 1s*/
void sort_vec(vector <int>&v,int size){
    int count=0;
    for(int ele:v){
        if(ele!=0 && ele!=1){
            cout << "Vector contains invalid element. Please enter only 0's and 1's.\n";
            return ;
        }
        if(ele==0){
            count++;
        }
    }
    for(int i=0;i<count;i++){
        v[i]=0;
    }
    for(int i=count;i<size;i++){
        v[i]=1;
    }
    cout << "Sorted vector: ";
    for(int ele:v){
        cout<<ele<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter vector size :";
    cin>>n;
    vector <int> vec(n);
    cout<<"Enter elements in vector (only 0's & 1's)\n";
    for(int &ele:vec){
        cin>>ele;
    }
    sort_vec(vec,n);
    return 0;
}