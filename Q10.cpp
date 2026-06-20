/*  Find the ASCII value of a character input by the user. 
    Then, print the character that is 5 places ahead in the ASCII table
*/

#include <iostream>
using namespace std;

int main ()
{
    char ch;
    cout << "Enter a Letter : ";
    cin >> ch ;

    cout << "Character is  : " << (ch) ;

    char chh = 5 + ch;
    cout << "\nAns is " << chh;
    
    return 0;
}
