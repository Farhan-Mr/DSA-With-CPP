// Factorial of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number to find factorial :- ";
    cin >> n;

    int sum = 1;
    for ( int i=1; i<=n; i++)
    {
        sum *= i;
    }

    cout << "Factorial is : " << sum ;

    return 0;
}