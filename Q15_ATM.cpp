/*
    Implement a basic ATM withdrawal system using switch. 
    Ask the user for an initial balance and a choice (1: Check Balance, 2: Deposit, 3: Withdraw). 
    Ensure appropriate validation (e.g., cannot withdraw more than the balance).
*/

#include <iostream>
using namespace std;

int main ()
{
    int x;
        
    cout << "choose any one :- \n\t\t 1. Check Balance \n\t\t 2. Deposit \n\t\t 3. Withdraw\n";
    cout << "\nEnter 1 , 2 or 3 :- ";
    cin >> x;
    switch (x)
    {
        case 1 : cout << "Avaliable balance is XXXXX";
                 break;
        case 2 : cout << "Deposit amount is XXXXX";
                 break;
        case 3 : cout << "Enter withdraw amount _____";
                 break;
        default : cout << "Choose correct Option !";
    }
    return 0;
}