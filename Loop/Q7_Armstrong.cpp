// Check Number is Armstrong number  -

#include <iostream>
using namespace std;

int main ()
{
    int x;
    cout << "Enter number ";
    cin >> x;

    int cpy = x;
    int sum = 0;
    int lastD;

    while (x>0)
    {
        lastD = x % 10;
        sum = sum + (lastD*lastD*lastD);
        x = x / 10;
    }

    if (cpy == sum)
    {
        cout << "It is Armstrong number " << cpy;
    }
    else 
    {
        cout << "not a Armstrong number ";
    }
    return 0;
}