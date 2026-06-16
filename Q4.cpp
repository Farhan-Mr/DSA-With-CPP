/* Write a program to check if a character is -
    an uppercase letter, lowercase letter or a digit 
    without using library functions like isupper()
*/

#include<iostream>
using namespace std;

int main ()
{
    char  ch;
    cout << "Enter a character of Upper-Lower case or 1 digit Number " << endl;
    cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
    {
        cout << "Valid Character ! \n";
        // classify it using If conditional statement - 
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << ch << " is Uppercase Letter " <<endl;
        }
        else if (ch >= 'a' && ch <= 'z') 
        {
            cout << ch << " is Lowercase Letter " <<endl;
        }
        
        else
        {
            cout << ch << " is Number " <<endl;
        }
    }
    else
    {
        cout << "Invalid character !";
    }

    return 0;
}