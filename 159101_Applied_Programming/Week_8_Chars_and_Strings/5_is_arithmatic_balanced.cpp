/**

5. A line of arithmetic is balanced if there is the correct number of parentheses in the line.
Examples: (3 + 5) * 2 is balanced. (2 + 4 * 3 is not balanced. 1 + 6)) * 3 is not balanced.
Write a program that reads in a line of arithmetic, as a string, and states whether it is balanced or not.

*/

#include <string>
#include <iostream>
using namespace std;

string user_input;

string is_balanced_parentheses(string arithmetic) {
    int convert_temp;

    int left_parens_number = 0; // 40 = (
    int right_parens_number = 0; // 41 = )
    cout << endl;

    for (int i=0; i<arithmetic.length(); i++) {
        convert_temp = arithmetic[i];

        if (convert_temp == 40) {
            left_parens_number++;
        } else if (convert_temp == 41) {
            right_parens_number++;
        }
    }

    if (left_parens_number == right_parens_number) {
        return "is balanced";
    } else {
        return "is not balanced";
    }
}

int main() {
    cout << "Enter an arithmatic string: ";
    getline(cin, user_input);
    cout << endl;

    cout << user_input << is_balanced_parentheses(user_input);
}