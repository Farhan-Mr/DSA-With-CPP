// Write a program to find the Last Digit of a number. Then find the second-to-last digit

#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter number : ";
    cin >> num;

    int lastNum;
    int SeclastNum;

    while(1)
    {
        lastNum = num % 10 ;
        cout << "Last Number is : " << lastNum << endl;
        num = num/10;

        SeclastNum = num % 10 ;
        cout << "Second Last Number is : " << SeclastNum;

        break;
    }
    return 0;
}