#include <iostream>
#include <string>
using namespace std;

int spaces=0, characters=0, word_index=0;
const int CHAR_LIMIT = 40;
string user_input, words[CHAR_LIMIT];
const string JUST_RULER = "1234567890123456789012345678901234567890";

void calculate_spaces_chars_and_split_words(string input_text) {
    string current_word = "";

    for (int i=0; i<input_text.length(); i++) {

        // Trimming spaces and checks for first and last chars
        if (i == 0 || i == input_text.length() -1) {
            if (input_text[i] == ' ') {
                continue;
            }
            else if (i == input_text.length() -1) {
                current_word += input_text[i];
                words[word_index] = current_word;
                word_index++;
            }
        }
        // Checks for chars in the middle
        if (input_text[i] == ' ') {
            words[word_index] = current_word;
            current_word = "";
            word_index++;
            spaces++;
        } else {
            current_word += input_text[i];
            characters++;
        }
    }
}

void format_returned_string(string input_text, int spaces, int remainder) {
    string formatted_string = "";
    int remainder_count = remainder;
    
    for (int i=0; i<word_index; i++) {
        int spaces_to_add = spaces;
        formatted_string += words[i];

        // don't add spaces after the last word
        if (i == word_index -1) {
            continue;
        } 
        // calculate the spaces based on how many remainders are left
        if (remainder_count != 0 && remainder != 0) {
            spaces_to_add++;
        }
        // add spaces to the string
        for (int j=0; j<spaces_to_add; j++) {
            formatted_string += ' ';
        }
        // sub the remainders so the spacing is correct
        remainder_count--;
    }
    cout << formatted_string << endl;
}

int main() {
    // ---- Get User Input ---- //
    cout << "Enter a line of text: ";
    getline(cin, user_input);
    cout << endl;

    if (user_input.length() > CHAR_LIMIT) {
        cout << "Max length for the sentence is " << CHAR_LIMIT << ", Please try again." << endl;
    } else {
        // ---- Calculate the spaces, characters, put words into the array etc ---- //
        calculate_spaces_chars_and_split_words(user_input);
        int available_space = CHAR_LIMIT - characters;
        int spaces_spread = available_space / spaces;
        int spaces_remainder = available_space % spaces;

        // ---- Format and display the final output ----//
        cout << JUST_RULER << endl;
        format_returned_string(user_input, spaces_spread, spaces_remainder);
    }
    cout << endl;

}
