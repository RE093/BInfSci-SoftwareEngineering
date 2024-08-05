/**

8. Write a program that reads in a positive integer number and displays the sum of the digits.
For example: the sum of the digits of 152 = 8
Are both a while loop and a for loop possible?

 */


#include <iostream>
using namespace std;

int user_input, user_input_length, sum, factor;

int main() {
    cout << "Enter a positive integer: ";
    cin >> user_input;

    user_input_length = to_string(user_input).length();

    for(int i = 0; i < user_input_length; i++) {
        if (factor == 0) {
            sum += user_input % 10;
            factor = 10;
        } else {
            sum += user_input / factor % 10;
            factor *= 10;
        }
    }

    cout << "Sum: " << sum << endl;
}