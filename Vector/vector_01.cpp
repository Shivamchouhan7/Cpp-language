#include <iostream>
#include<vector>
using namespace std;
// To find the last occurance of an element x in a given vector
int main(){
    vector<int>vec(10);
    int x,last_occurance=-1;
    cout<<"Enter the elements of vector :-\n";
    for(int i=0;i<10;i++){
        cin>>vec[i];
    }
    cout << "Enter the element whose last occurrence you want to find: ";
    cin>>x;
    for(int i=vec.size()-1;i>=0;i--){
        if(x==vec[i]){
            last_occurance=i;
            break;
        }
    }
    if(last_occurance==-1){
        cout<<"This element is not present in this vector !!\n";
    }
    else{
        cout<<"Last occurance of "<<x<<" is "<<last_occurance;
    }
    return 0;
}