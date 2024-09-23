/**

5. Write a program that reads in some text with a * character at the start of a word or line to end input.
The program must build up a hidden message from the first and last words of each sentence. Input
sentences must only have a punctuation mark (. or ! or ?) at the end. Example:
Input: The cat sat on the mat. Is that a fact Mr Green? And was the
cat's name Fluffy? *
Output: The mat Is Green And Fluffy

*/


#include <iostream>
#include <string>
using namespace std;

string user_input, words[100], hidden_message[100];

void find_hidden_message(string user_input) {
    string current_word = "";
    bool first_word = true;
    int hidden_index = 0;

    for (int i =0; i<user_input.length(); i++) {
        char current_letter = user_input[i];
        
        if (current_word.length()) {
            if (current_letter == ' ') {
                if (first_word) {
                    hidden_message[hidden_index] = current_word;
                    first_word = false;
                    hidden_index++;
                    current_word = "";
                    continue;
                } else {
                    current_word = "";
                    continue;
                }
            } else if (current_letter == '?' || current_letter == '!' || current_letter == '.') {
                    hidden_message[hidden_index] = current_word;
                    first_word = true;
                    hidden_index++;
                    current_word = "";
                    continue;
            } 
        }
        if (current_letter != ' ') {
            current_word += current_letter;
        }
    }
}


int main() {
    cout << "Enter text: ";
    getline(cin, user_input);

    find_hidden_message(user_input);

    for (int i = 0; i < 100; i++) {
        cout << hidden_message[i];
        cout << " ";
    }
}