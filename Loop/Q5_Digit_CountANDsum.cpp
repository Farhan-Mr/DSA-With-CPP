// Program to Count digits and Sum of digits

#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter digit to count and sum it :- ";
    cin >> num;

    int coun = 0;
    int lastD;
    int sum = 0;
    while(num>0)
    {
        lastD = num %10;
        sum = sum + lastD;
        num = num/10;
        coun ++;
    }

    cout << "Number of digit is " << coun << endl;
    cout << "Sum of digit is " << sum << endl;
    return 0;
}