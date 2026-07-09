//  Write a function to check if a number is an Armstrong number. 
// Then, use this function to print all Armstrong numbers between 1 and 1000.

#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp = num;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return sum == original;
}

// main function -
int main() {
    cout << "Armstrong numbers between 1 and 1000:" << endl;
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}