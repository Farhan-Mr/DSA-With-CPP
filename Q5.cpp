/* Given the total number of seconds, convert it into hours, minutes and seconds format (HH:MM:SS) */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Seconds, H, M, S;

    cout << "Enter number in Seconds : ";
    cin >> Seconds;

    H = Seconds / 3600;
    M = (Seconds % 3600) / 60;
    S = Seconds % 60;

    cout << "HH : MM : SS\n";

     cout << setfill('0') << setw(2) << H << " : " << setw(2) << M << " : " << setw(2) << S << endl;

    return 0;
}