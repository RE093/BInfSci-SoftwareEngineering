/**

1. Write a program that asks the user for three words, then display the lengths of the three words. Display
the sum of these three lengths and the length of the three words concatenated (which should be identical).

*/


#include <iostream>
#include <string>
using namespace std;

string word1, word2, word3;

int main() {
    cout << "Enter the first word: ";
    getline(cin, word1);

    cout << "Enter the second word: ";
    getline(cin, word2);

    cout << "Enter the third word: ";
    getline(cin, word3);

    cout << "Length of the first word: " << word1.length() << endl;
    cout << "Length of the second word: " << word2.length() << endl;
    cout << "Length of the third word: " << word3.length() << endl;

    cout << "Sum of the lengths: " << word1.length() + word2.length() + word3.length() << endl;
}