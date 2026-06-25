/* Print Diagonal */

#include <iostream>
using namespace std;

int main ()
{
    int row,column;
    cout << "Enter row and column :- ";
    cin >> row >> column;

    for (int i=1; i<=row; i++)
    {
        for( int j=1; j<=column; j++)
        {
            if (i==j)
            {
                cout << "*";
            }       
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}