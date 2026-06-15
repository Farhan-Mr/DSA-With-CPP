// Given a 3-digit number, write a program to calculate the sum of its digits. (Hint: Use % and / operators).

#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter three digit number : \n";
    cin >> num;

    if ( 99 < num  &&  999 >= num)
    {
        cout << "Three digit number is : " << num;

        // condition - 
    }
    else
    {
        cout << "Check current number !";
    }
    
    

    return 0;
}