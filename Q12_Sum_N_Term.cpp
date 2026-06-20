/*
    Find the sum of the first N natural numbers using the formula -> n(n+1)/2
*/

#include<iostream>
using namespace std;

int main ()
{   
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum = (n*(n+1))/2;

    cout << "Sum of N term is " << sum;
    
    return 0;
}