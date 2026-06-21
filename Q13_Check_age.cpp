// Check positive, negative or zero also
#include <iostream>

using namespace std;

int main ()
{
    int x;
    cout << "Enter age : ";
    cin >> x ;

    if (x > 0)
    {
        cout << "This is positive number"  << endl;
        
    }
    
    else if(x == 0 )
        {
            cout << "This is 0 ";
        }

    else if (x < 0 )
    {
        cout << "This is Negetive number " << x;
    }
    
    return 0;
}