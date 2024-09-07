/**

3. Write a function that counts and returns the number of digits in a positive integer eg for the integers 43,
105 and 6, the return should be 2, 3 and 1 respectively.

*/

#include <iostream>
#include <string>
using namespace std;

int user_inputs[3];

int count_digits(int number) {
    int number_length = to_string(number).length();
    return number_length;
}

int main() {
    cout << "Enter 3 numbers: ";
    cin >> user_inputs[0] >> user_inputs[1] >> user_inputs[2];

    for (int i=0; i<3; i++) {
        cout << "Digits " << i + 1 << ": " << count_digits(user_inputs[i]) << endl;
    }
}