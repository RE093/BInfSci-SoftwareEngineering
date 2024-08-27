/**

7. Write a function that reads 5 real numbers from 0.0 to 100.0 into an array, checking that input is valid,
and displaying any values between 50.0 and 60.0 to 2 decimal places.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int total_index;
float number_array[5], current_number;

int main() {
    while(total_index != 5) {
        cout << "Enter a value: ";
        cin >> current_number;

        if (current_number > 0.0 && current_number < 100.0) {
            number_array[total_index++] = current_number;
        } else {
            cout << "Please enter a valid input between 0.0 and 100.0: " << current_number << endl;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (number_array[i] > 50.0 && number_array[i] < 60.0) {
            cout << "Valid: " << setprecision(2) << fixed  << number_array[i] << endl;
        }
    }
}