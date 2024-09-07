/**

7. Write a program that calls two functions named load and round, to set up two corresponding arrays
of 7 positive integers each. The functions must do the following:
load reads in one value, checking that it is between 0 and 500 before assigning it to the first array
round rounds a value from the first array and assigns the rounded value to the second array.
The program should then display the two arrays in this way:
33 is rounded down to 30
15 is rounded up to 20
100 is unchanged by rounding etc
(Remember rounding involves adding 5, dividing by 10 and multiplying by 10.)

*/

#include <iostream>
#include <vector>
using namespace std;

int state, user_input, number_length;
vector<int> unrounded;
vector<int> rounded;

bool load(int number) {
    if (number < 0 || number > 500) {
        return false;
    } else {
        unrounded.push_back(number);
        return true;
    }
}

int round(int number) {
    int option_a = ((number + 5) / 10) * 10;

    int option_b = option_a + 10;

    if (number - option_a >= option_b - number) {
       rounded.push_back(option_b);
    } else {
       rounded.push_back(option_a);
    }
}

int main() {
    cout << "Enter 7 numbers between 0 and 500 " << endl << endl;

    while (state < 7) {
        cout << "Enter number " << state + 1 << ": ";
        cin >> user_input;

        if (load(user_input)) {
            state++;
        }
    }

    for (int i = 0; i < 7; i++) {
        round(unrounded[i]);
    }
    for (int i = 0; i < 7; i++) {
        if (unrounded[i] > rounded[i]) {
            cout << unrounded[i] << " is rounded down to " << rounded[i] << endl;
        } else {
            cout << unrounded[i] << " is rounded up to " << rounded[i] << endl;
        }
    }
}