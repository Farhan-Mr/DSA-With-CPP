// Calculate the simple interest and compound interest for given Principal, Rate, and Time
// (Use pow() function for CI)

#include <iostream>
#include <cmath>
using namespace std;


void SimpleInt();
void Compound();

int main()
{   
    cout << "This is code -> \n";

    SimpleInt();
    Compound();

    return 0;
}

void SimpleInt()
    {
        float SI, P, R;
        int time;

        cout << "Enter Principal , Rate and Time : \n";
        cin >> P >> R >> time;

        cout << "\nPrincipal " << P << ", Rate " << R << " and Time " << time << endl;

        SI = (P*R*time)/100;

        cout << "SI is -> " << SI;
    }
    

    void Compound()
    {
        double P, R, T;

        cout << "\n\nEnter Principal, Rate and Time: ";
        cin >> P >> R >> T;

        double Amount = P * pow(1 + R / 100.0, T);
        double CI = Amount - P;

        cout << "Compound Interest = " << CI << endl;
        cout << "Total Amount = " << Amount << endl;
    }