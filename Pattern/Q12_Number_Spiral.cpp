/*
    Q16. Number Spiral / Matrix PatternPrint numbers spiraling inward in an $N \times N$ grid.Plaintext1  2  3  4
    12 13 14 5
    11 16 15 6
    10 9  8  7
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {

        // Left to Right
        for (int i = left; i <= right; i++)
            a[top][i] = num++;
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        // Right to Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                a[bottom][i] = num++;
            bottom--;
        }

        // Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }

    // Print the matrix
    cout << "\nNumber Spiral:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }

    return 0;
}