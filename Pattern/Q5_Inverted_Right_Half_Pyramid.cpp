// Inverted Right Half Pyramid

#include <iostream>

using namespace std;
int main ()
{
    int h;
    cout << "Enter height :- ";
    cin >> h;

    for(int i=h; i>0; i--)
    {
        for( int j=i; j>0; j--)
        {
            cout << " * ";
        }
        cout << "\n";
    }
    return 0;
}