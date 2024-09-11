/**

8*
. Write a program that reads in a string and sets up a second string that is the first string with all vowels
(upper or lower case) deleted. Example output:
The quick brown fox jumped Over the lazy dog.
Th qck brwn fx jmpd vr th lzy dg.

*/

#include <string>
#include <iostream>
using namespace std;

string user_input;
string remove_vowels(string input) {
    // a = 97 A = 65, e = 101 E = 69, i = 105 I = 73, o = 111 O = 79, u = 117 U = 85

    int vowels[10] = {97,65, 101,69, 105,73, 111,79, 117,85};
    int converted_temp;
    string appended_string;
    bool found;
    
    for (int i=0; i<input.length(); i++) {
        converted_temp = input[i];
        found = false;
        
        for (int j=0; j<10; j++) {
            if (vowels[j] == input[i]) {
                found = true;
            }
        }

        if (!found) {
            appended_string += input[i];
        }
    }

    return appended_string;
}

int main() {
    cout << "Enter a string: ";
    getline(cin, user_input);
    cout << endl;

    cout << remove_vowels(user_input);
}