/* A student is given marks in 5 subjects. 
 Calculate the total percentage and print the result based on :-
  >90% (Grade A), >75% (Grade B), >50% (Grade C), else Fail */

#include <iostream>
using namespace std;

int main ()
{
    float M1, M2, M3, M4, M5, per;
    cout << "Enter 5 subject marks : \n";
    cin >> M1 >> M2 >> M3 >> M4 >> M5;

    cout << "Marks of 5 Subject are : "<< endl;
    cout << " M1 -> " << M1 << endl;
    cout << " M2 -> " << M2 << endl;
    cout << " M3 -> " << M3 << endl;
    cout << " M4 -> " << M4 << endl; 
    cout << " M5 -> " << M5 << endl;

    
    per = (M1+M2+M3+M4+M5)/5;
    cout << "Percentage of 5 Subject is : " << per << endl;

    if (per>90)
    {
        cout << "Grade A" << endl;
    }
    else if (per >75)
    {
        cout << "Grade B" << endl;
    }

    else if (per > 50)
    {
        cout << "Grade C" << endl;
    }

    else
    {
        cout << "Fail !" << endl;
    }
    return 0;
}

