#include <iostream>
#include<vector>
using namespace std;
// For each loop
int main(){
    vector<int> vec(5);
    // taking input using for each loop
    cout<<"Enter elements:-\n";
    for(int &ele:vec){
        cin>>ele;
    }

    // print vector
    cout<<"Your vector is:-\n";
    for(int elem:vec){
        cout<<elem<<" ";
    }
    return 0;
}