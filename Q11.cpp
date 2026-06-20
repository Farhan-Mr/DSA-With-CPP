/* Write a program to calculate the distance between two points -
    (x1, y1) and (x2, y2)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;

    double distance = sqrt(dx * dx + dy * dy);

    cout << distance;

    return 0;
}