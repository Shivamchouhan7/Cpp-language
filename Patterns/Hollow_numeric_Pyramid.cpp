#include <iostream>
using namespace std;

/* Hollow Numeric Pyramid like:-
Enter n :5
    1
   2 2
  3   3
 4     4
555555555
*/
int main() {
    int n;
    cout << "Enter n :"; // Enter 5 for the above example
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (i == n - 1 || j == 0 || j == 2 * i) {
                cout << i + 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
