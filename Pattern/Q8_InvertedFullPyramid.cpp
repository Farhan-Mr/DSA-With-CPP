// Inverted Full Pyramid (Inverted Triangle)

#include <iostream>
using namespace std;

int main ()
{
    int h;
    cout << "Enter height :- ";
    cin >> h;

    for (int i = 0; i < h; i++)
    {
        // Print spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Left half of pyramid
        for (int k = i; k < h; k++)
        {
            cout << "*";
        }

        // Right half of pyramid
        for (int l = i + 1; l < h; l++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    return 0;
}