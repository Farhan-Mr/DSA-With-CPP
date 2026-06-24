// Prime numbers in range

#include <iostream>
using namespace std;

int main()
{
    int range;
    cout << "Enter range to check prime :- ";
    cin >> range;

    for (int i = 2; i <= range; i++)
    {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }

    return 0;
}