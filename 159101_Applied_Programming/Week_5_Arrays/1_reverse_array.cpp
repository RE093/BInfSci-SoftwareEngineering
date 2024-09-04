/**

1. Write a program that uses a for loop to read in 7 real numbers and store them in an array. Then use
another for loop to display the numbers in the reverse order. Do NOT sort.

 */

#include <iostream>
using namespace std;

float user_input;
float input_array[7];

int main() {
    for (int i = 0; i < 7; i++) {
        cout << "Please enter a number: ";
        cin >> user_input;
        input_array[i] = user_input;
    }

    for (int i = 6; i >= 0; i--) {
        cout << input_array[i] << endl;
    }
}