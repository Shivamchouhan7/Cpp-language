#include <iostream>
#include<vector>
using namespace std;

int main(){
//vector<int> vec;// empty vector of integers  

//vector<int> vec2(5, 10); by this syntax we can create Vector of 5 integers, all initialized to 10

vector<int>vec={10,20,30,40,50};

//push_back function 
//for inserting element at the end 
vec.push_back(60);
vec.push_back(70);
vec.push_back(80);
vec.push_back(90);
vec.push_back(100);

//at function
int second = vec.at(1); // Access the second element using `at`
cout<<second<<endl;// 20

// pop_back function 
// delete the last element of vector 
vec.pop_back(); // here it delete 100

// Access the element
int first = vec[0];
cout<<first<<endl; //10
 
// front function
cout<<vec.front()<<endl; // to print front value of vector, here 10

// back function
cout<<vec.back()<<endl; // to print end value of vector, here 90

// vector size 
cout<< vec.size()<<endl; // to print the size of vector, here 9 
 
// vector capacity 
cout<<vec.capacity();


}