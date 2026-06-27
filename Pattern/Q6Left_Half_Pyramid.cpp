// Left Half Pyramid

#include <iostream>
using namespace std;

int main ()
{
    int h;
    cout << "Enter height :- ";
    cin >> h;

    for(int i=h; i>0; i--)
    {
        for(int j=i; j>0; j--)
        {
            cout << " ";
        }
        for(int k=i; k<=h; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}