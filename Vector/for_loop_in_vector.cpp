#include <iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> vec; 
    vector<int> vec(5);
     
    // for loop 
    cout<<"Enter value (using for loop here):-\n";
    for(int i=0;i<5;i++){
        cin>>vec[i];// use when vector is defined like this: vector<int> vec(5);
        
        /*
          Note: 
          - Use direct indexing (vec[i]) when the vector has a fixed size.
          - If the vector is declared without a predefined size, use push_back() to add elements.
          
          Example for push_back():
          vector<int> vec; // Empty vector
          int ele;
          cin >> ele;
          vec.push_back(ele); // Dynamically add elements to the vector
        */
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    

    
    return 0;
}