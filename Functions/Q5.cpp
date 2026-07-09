/* 
    Write a function nCr(n, r). Use a separate function to calculate the factorial.
*/

#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    if (r > n || n < 0 || r < 0)
    {
        cout << "Invalid input!" << endl;
    }
    else
    {
        cout << "nCr = " << nCr(n, r) << endl;
    }

    return 0;
}