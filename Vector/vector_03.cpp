#include <iostream>
#include<vector>
using namespace std;
// To find no of elements strictly greater than value x in a given vector
int main(){
    vector<int>vec;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vec.resize(n);
    int x,count=0;
    cout<<"Enter the elements of vector :-\n";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout << "Enter the number to find all the numbers greater than it: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x<vec[i]){
            count++;
        }
    }
    if(count==0){
        cout << "No elements in the vector are greater than " << x << "." << endl;
    }
    else{
        cout<<"Total count of number greater than  "<<x<<" is "<<count;
    }
    return 0;
}