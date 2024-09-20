/**

2. Write a program that asks the user for three words and prints out the words in alphabetical order, then
the words concatenated in alphabetical order (stored in a fourth string).

*/

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;

string word1, word2, word3, word4;

array<string, 3> word_sort(array<string, 3> words) {
    sort(words.begin(), words.end());
    return words;
}

int main() {
    cout << "Enter the first word: ";
    getline(cin, word1);
    cout << "Enter the second word: ";
    getline(cin, word2);
    cout << "Enter the third word: ";
    getline(cin, word3);

    array<string, 3> words_list = {word1, word2, word3};
    array<string, 3> sorted_words = word_sort(words_list);
    word4 = sorted_words[0] + sorted_words[1] + sorted_words[2];

    cout << "Words in alphabetical order: " << sorted_words[0] << ", " << sorted_words[1] << ", " << sorted_words[2] << endl;
    cout << "Words concatenated in alphabetical order: " << word4 << endl;
}