// Write a program to find the largest of three numbers using only arithmetic/logical operators (no if-else).

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter three number : ";
    cin >> a >> b >>c;

    int largeAB = (a + b + abs(a - b)) / 2;
    int largest = (largeAB + c + abs(largeAB - c)) / 2;

    cout << "Largest number = " << largest;

    return 0;
}