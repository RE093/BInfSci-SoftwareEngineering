/**

6. Write a program that reads in lengths for the two shorter sides, x and y, of a right-angled triangle, then
calls a function called hypotenuse that calculates and returns the length of the third side, h, according
to Pythagoras’ formula:
______
h = √ x2 + y2
Your program should include the square function from Q1, with hypotenuse calling square.

*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float hypotenuse(float x, float y) {
    return sqrt((x*x) + (y*y));
}

float user_x, user_y;

int main() {
    cout << "Enter sides x and y: ";
    cin >> user_x >> user_y;

    cout << fixed << setprecision(1) << "Side z = " << hypotenuse(user_x, user_y) << endl;
}