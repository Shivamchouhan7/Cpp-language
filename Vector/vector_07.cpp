#include <iostream>
#include <vector>
using namespace std;
/* Given an array(vector) of integers , move all even integers at the beginning of array
followed by all odd integers ,order of odd even integers does not matter*/
void sort_vec(vector<int> &v, int size)
{
    int left_ptr = 0, right_ptr = size - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 != 0 && v[right_ptr] % 2 == 0)
        {
            swap(v[left_ptr++], v[right_ptr--]);
        }
        else
        {
            if (v[left_ptr] % 2 == 0)
            {
                left_ptr++;
            }
            if (v[right_ptr] % 2 != 0)
            {
                right_ptr--;
            }
        }
    }
    cout << "Final vector: ";
    for (int ele : v)
    {
        cout << ele << " ";
    }
}
int main()
{
    int n;
    cout << "Enter vector size :";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements in vector:-\n";
    for (int &ele : vec)
    {
        cin >> ele;
    }
    sort_vec(vec, n);
    return 0;
}