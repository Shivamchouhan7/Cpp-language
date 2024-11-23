#include <iostream>
using namespace std;
/* Hollow numeric  Rectangle Pattern like:-
1234567
1     7
1     7
1     7
1234567
*/
int main()
{
    int length, width;
    // Enter width=5 and length=7 for above example
    cout << "Enter the Width of rectangle :";
    cin >> width;
    cout << "Enter the length of rectangle :";
    cin >> length;
    for (int i = 1; i <= width; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i == 1 || j == 1 || i == width || j == length)
            {
                cout << j;
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}