/**

7. Write a program that reads in a string and a letter, then prints the index of the second occurrence of the
letter in the string. Two examples of output:
2nd 't' in "computer science at Massey" at position 18.
There are not two 'm's in "computer science at Massey."

*/

#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

string user_input_string;
char user_input_char;
int user_index;

int get_index(string input_string, char input_char) {
    int position = 0;
    int occurrences = 0;
    int converted_temp;

    for (int i=0; i<input_string.length(); i++) {
        converted_temp = input_string[i];

        if (converted_temp != 32) {
            position++;
        }
        if(input_string[i] == input_char) {
            occurrences++;
            if (occurrences == 2) {
                return position + 1;
            }
        }
    }

    return 0;
}

int main() {
    cout << "Enter a string: ";
    getline(cin, user_input_string);
    cout << "Enter a char: ";
    user_input_char = getchar();

    user_index = get_index(user_input_string, user_input_char);

    if (user_index == 0) {
        cout << "There are not two " << user_input_char << "'s in " << user_input_string << endl;
    } else {
        cout << "2nd '" << user_input_char << "' in " << user_input_string << " at position " << user_index << endl;
    }
}