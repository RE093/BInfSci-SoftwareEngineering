/**

1. Write a function called square, that has a real number argument. The function should return the
square of the number, for example, if the function is called with 5.0 then main should display:
The square of the number is 25.0

*/

#include <iostream>
#include <iomanip>
using namespace std;

float user_input;

float square(float number) {
    return number * number;
}

int main() {
    cout << "Enter a squarable real number: ";
    cin >> user_input;

    cout << endl << setprecision(1) << fixed << square(user_input) << endl << endl;
}