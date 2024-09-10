/**

3. Write a program that checks if a character is a lowercase letter, an uppercase letter, or some other
character. Use your function from question 2 and create a function for uppercase. The program should
repeat as long as the user reads any character other than Q, which should stop the program. The display
should look something like this:
Enter a character: &
& is not a letter.
Enter another character or Q to quit: ?
Enter a character: d
d is a lowercase letter.
Enter another character or Q to quit: Q

*/

#include <iostream>
using namespace std;

bool entering_values = true;
char user_input;
int ascii_value, current_index;

bool lowercase(char c) {
    // a = 97, z = 122;
    ascii_value = c;
    if (ascii_value >= 97 && ascii_value <= 122) {
        return true;
    } else {
        return false;
    }
}

bool uppercase(char c) {
    // A = 65, Z = 90;
    ascii_value = c;
    if (ascii_value >= 65 && ascii_value <= 90) {
        return true;
    } else {
        return false;
    }
}

int main() {
    while(entering_values) {
        if (current_index > 0) {
            cout << "Please enter another character: ";
        } else {
            cout << "Enter a character: ";
        }
        cin >> user_input;

        if (user_input == 81) {
            entering_values = false;
        } else {
            if (lowercase(user_input)) {
                cout << user_input << " is a lowercase letter." << endl;
            } else if (uppercase(user_input)) {
                cout << user_input << " is an uppercase letter." << endl;
            } else {
                cout << user_input << " is not a letter." << endl;
            }
            current_index++;
        }
    }
}