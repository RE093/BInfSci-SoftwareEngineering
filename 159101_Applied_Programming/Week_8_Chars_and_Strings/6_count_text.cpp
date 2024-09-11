/**

6. Write a program that reads in a line of text and prints out how many characters and how many words
are in the text. (Characters include punctuation and spaces between words.)

*/

#include <iostream>
#include <string>
using namespace std;

string user_input;

int calc_words(string input) {
    int spaces = 1;
    int convert_temp;

    for(int i=0; i<input.length(); i++) {
        convert_temp = input[i];
        if (convert_temp == 32) {
            spaces++;
        }
    }
    return spaces;
}

int main() {
    cout << "Enter a string: ";
    getline(cin, user_input);

    cout << "Words = " << calc_words(user_input) << endl;
    cout << "Chars = " << user_input.length();
}