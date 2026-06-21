// Find maximum of 3 numbers

#include <iostream>
using namespace std;

int main ()
{
    int a,b,c;

    cout << "Enter 3 number : ";
    cin >> a >> b >> c;

    if (a>b && a>c)
    {
            cout << "Largest is A : " << a;
    }

    else if (b>a && b>c)
    {
        cout << "Largest is B : " << b;
    }
    
    else 
    {
        cout << "Largest is A : " << c;
    }
    return 0;
}