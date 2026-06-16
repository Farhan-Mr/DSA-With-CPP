// Write a program to reverse a 3-digit number. Example: Input 123 -> Output 321.

#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter 3 digit number : \n";
    cin >> num;

    if(num >= 100 && num <= 999)
    {
        cout << "Number is " << num <<  endl;

        int lastDigit ;
        int reverse = 0;
        while (num > 0)
        {
            lastDigit = num % 10;
            reverse = lastDigit + (10*reverse);
            num = num / 10;
        }
        cout << "Reverse Number  is : " <<  reverse << endl;
    }
    else
    {
        cout << "Enter Valid Number ! ";
    }
    return 0;
}