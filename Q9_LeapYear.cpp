// Write a program to check if a year is a Leap Year
#include <iostream>
using namespace std;

int main ()
{   
    int year;
    cout << "Enter Year :- ";
    cin >> year;

    // condition to check leap year -
    if (year % 4 == 0)
    {
        cout << "Leap Year !";
    }
    else
    {
        cout << "Not a Leap Year !";
    }
    return 0;
}