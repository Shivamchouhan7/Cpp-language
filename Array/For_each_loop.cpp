#include <iostream>
using namespace std;
// for each loop
int main(){
    int array[5];
    cout<<"Enter elements of array:";
    //Taking input of array element using for each loop
    for (int &element:array){
        cin>>element;
    }
    // printing array element by using for each loop
    for(int element:array){
        cout<<element<<endl;
    }

    return 0;
}