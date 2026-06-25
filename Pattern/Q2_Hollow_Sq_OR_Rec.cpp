/* Hollow Square or rectangle Pattern */

#include <iostream>
using namespace std;

int main ()
{
    int row , column;

    cout << "Enter row and column :- ";
    cin >> row >> column;

    for ( int i=0; i<=row; i++)
    {
        for( int j=0; j<=column; j++)
        {
            if ( i==0 || j==0 || j<=0 || i<=0|| i==row || j==column )
            {
                cout << " * ";
                //cout << "(" << i << "," << j << ")";
            }
            else{
                cout << " ";
            }
            // cout << "(" << i << "," << j << ")";
        }
        cout<< "\n";
    }
    return 0;
}