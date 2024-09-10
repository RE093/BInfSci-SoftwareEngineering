/**

2. Write a function bool lowercase(char c); that returns true if a character is a lowercase letter
(‘a’ to ‘z’) and false if it isn’t. Test your function in a main that repeatedly reads characters until the user
enters #.

*/

#include <iostream>
using namespace std;


char user_input;
int ascii_value;
bool entering_values = true;

bool lowercase(char c) {
    // a = 97, z = 122;
    ascii_value = c;
    if (ascii_value >= 97 && ascii_value <= 122) {
        return true;
    } else {
        return false;
    }
}

int main() {
    while(entering_values) {
        cout << "Enter a characters (# to stop): ";
        cin >> user_input;

        if (user_input == 35) {
            entering_values = false;
        } else {
            cout << "Input: " << user_input << " = " << lowercase(user_input) << endl;
        }
    }
}