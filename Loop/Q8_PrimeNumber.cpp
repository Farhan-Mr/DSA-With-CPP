/* Check number is prime or not - */

#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter number :- ";
    cin >> num;

    int count = 0;

    for (int i=2; i<= num; i++)
    {
        if(num % i == 0)
        {
            count ++;
        }
    }
    if (count <= 2 && count != 0)
    {
        cout << "Number is Prime ";
    }
    else
    {
        cout << "not a prime number !";
    }
    return 0;
}