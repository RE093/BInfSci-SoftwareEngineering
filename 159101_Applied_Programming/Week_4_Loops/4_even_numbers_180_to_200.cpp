#include <iostream>
using namespace std;

/**

Write a program that will display all the even numbers from 180 to 200 inclusive, one number per line.
Place a heading, "Even Numbers between 180 and 200" above the list, and the sum of the numbers below
the list. (Sum should be 2090.)

 */

int sum, current_value;

int main() {
    cout << "Even Numbers between 180 and 200" << endl;

    for(int i = 180; i <= 200; i += 2) {
        cout << i << endl;
        sum += i;
    }

    cout << "Sum is: " << sum << endl;
}