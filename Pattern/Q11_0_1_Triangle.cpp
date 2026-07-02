//     0-1 Triangle

/*
Print alternating 0s and 1s starting with 1.

Plaintext
1
0 1
1 0 1
0 1 0 1

*/

#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    return 0;
}