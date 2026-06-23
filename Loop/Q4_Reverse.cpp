// Reverse a number 

#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter number to reverse it : \n";
    cin >> num;
    
        int lastDigit ;
        int reverse = 0;
        while (num > 0)
        {
            lastDigit = num % 10;
            reverse = lastDigit + (10*reverse);
            num = num / 10;
        }
        cout << "Reverse Number  is : " <<  reverse << endl;
    
    return 0;
}