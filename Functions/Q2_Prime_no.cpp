// Prime check using function

#include <iostream>
using namespace std;

int prime(int num);

int main()
{
    int num;

    cout << "Enter number : ";
    cin >> num;

    if (prime(num))
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}

int prime(int num)
{
    if (num <= 1)
        return 0;

    int count = 0;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 1)
        return 1;
    else
        return 0;
}