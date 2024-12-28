#include <iostream>
#include <vector>
using namespace std;
/* Sort a vector consisting 0's and 1's 
using the two-pointer technique for 
sorting the vector of 0's and 1's*/
void sort_vec(vector <int>&v,int size){
    int left_ptr=0,right_ptr=size-1;
    
    for(int ele:v){
        if(ele!=0 && ele!=1){
            cout << "Vector contains invalid element. Please enter only 0's and 1's.\n";
            return ;
        }
    }
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 &&v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
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