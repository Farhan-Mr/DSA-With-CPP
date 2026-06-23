// Program to check Palindrome number -

#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter number :- ";
    cin >> num;

    int cpy = num;

    int lastd;
    int rev = 0;

    while(num>0)
    {
        lastd = num % 10;
        rev = lastd + (10*rev);
        num = num/10;
    }

    if (cpy == rev)
    {
        cout<< "Number is Plaindrome ! ok !";
    }
    else{
        cout << "Number is NOT !! Plaindrome !! ok !";
    }

    return 0;
}