#include <iostream>
#include<vector>
using namespace std;
// To find the Total occurance of an element x in a given vector
int main(){
    vector<int>vec;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vec.resize(n);
    int x,occurance=0;
    cout<<"Enter the elements of vector :-\n";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout << "Enter the element whose Total occurrence you want to find: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==vec[i]){
            occurance++;
        }
    }
    if(occurance==0){
        cout<<"This element is not present in this vector !!\n";
    }
    else{
        cout<<"Total occurance of "<<x<<" is "<<occurance;
    }
    return 0;
}