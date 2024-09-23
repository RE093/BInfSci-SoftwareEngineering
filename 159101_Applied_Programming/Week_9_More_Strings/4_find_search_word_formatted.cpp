/**

4. Repeat the program in question 3. However, this time assume that the list of words can have a
punctuation mark at the end. A punctuation mark can be . or ! or ? Also, the words may be in upper
case or lower case (and you must count the word irrespective of case). Example:
Enter the search word: cat
Enter some words (end with *): That CAT is a MAD cat! *
The word cat appeared 2 times.

*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string search_word, word;
int word_count = 0;

string format_for_comparison(string word) {
    string formatted_word = word;

    for (int i =0; i < formatted_word.length(); i++) {
        char current_letter = formatted_word[i];

        if (current_letter == '.' || current_letter == '!') {
            formatted_word = formatted_word.substr(0, i);
            break;
        } else {
            formatted_word[i] = tolower(current_letter);
        }
    }
    return formatted_word;
}

int main() {
    cout << "Enter the search word: ";
    getline(cin, search_word);

    cout << "Enter some words (end with *): ";
    while (true) {
        getline(cin, word);
        if (word == "*") {
            break;
        }
        else if (format_for_comparison(search_word) == format_for_comparison(word)) {
            cout << "is same: " << endl;
            word_count++;
        }
    }

    cout << "The word " << search_word << " appeared " << word_count << " times." << endl;
}