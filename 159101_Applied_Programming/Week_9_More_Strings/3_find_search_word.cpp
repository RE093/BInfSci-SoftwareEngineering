/**

3. Write a program that reads in a search word, then reads in several words ending with a * character.
The program should count how many times the search word occurs in the text. Assume that there is no
punctuation. Example:
Enter the search word: cat
Enter some words (end with *): That cat is a mad cat *
The word cat appeared 2 times.

*/

#include <iostream>
#include <string>
using namespace std;

string search_word, word;
int word_count = 0;

int main() {
    cout << "Enter the search word: ";
    getline(cin, search_word);

    cout << "Enter some words (end with *): ";
    while (true) {
        getline(cin, word);
        if (word == "*") {
            break;
        }
        if (search_word == word) {
            word_count++;
        }
    }

    cout << "The word " << search_word << " appeared " << word_count << " times." << endl;
}