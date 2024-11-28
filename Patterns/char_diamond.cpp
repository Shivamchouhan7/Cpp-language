#include <iostream>
using namespace std;
/*Character diamond pattern like:-
Enter number:4
    A
   ABC
  ABCDE
 ABCDEFG
  ABCDE
   ABC
    A
*/

int main()
{
    int n;
    cout << "Enter number:";// Enter 4 for above example
    cin >> n;
    //for upper half of the diamond
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        //print characters
        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    //for lower half of the diamond
    for (int i = 1; i < n; i++)
    {
        // print leading spaces
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        //print characters
        char ch = 'A';
        for (int j = 0; j < 2 *(n-i)-1 ; j++)
        {
            cout<<ch;
            ch++;
            
        }
        cout << endl;
    }
        return 0;
    }