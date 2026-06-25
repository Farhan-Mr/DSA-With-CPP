//  Q1. Square Fill Pattern

#include <iostream>
using namespace std;

int main ()
{
    int row, column;

    cout << "Enter Row and Column of Pattern :- \n";
    cin >> row >> column;

    for (int i=1; i<=row; i++)
    {
        for(int j=1; j<=column; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }
    
    return 0;
}