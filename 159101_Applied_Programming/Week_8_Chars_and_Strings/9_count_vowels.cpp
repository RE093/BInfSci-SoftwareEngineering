/**

9*
. Write a program that reads in a line of text and records in a counting array, the number of occurrences
of each vowel (a/A, e/E, i/I, o/O, u/U). The ‘a/A’ count will be recorded at position/index 0, the ‘e/E’
count at position/index 1 etc). Display the result. Example:
We know bees are great.
a or A occurs 2 times
e or E occurs 5 times
i or I occurs 0 times
o or O occurs 1 times
u or U occurs 0 times

*/

#include <string>
#include <iostream>
using namespace std;

int found_vowels[5];
string user_input;

void count_vowels(string input) {
    // a = 97 A = 65, e = 101 E = 69, i = 105 I = 73, o = 111 O = 79, u = 117 U = 85
    int converted_temp; 
    int difference = 32;
    int vowels[5] = {97, 101, 105, 111, 117};
    
    for (int i=0; i<input.length(); i++) {
        converted_temp = input[i];

        for(int j=0; j<5; j++) {
            if (vowels[j] == converted_temp || vowels[j] - difference == converted_temp) {
                found_vowels[j]++;
            }
        }
    }
}

int main() {
    cout << "Enter a string: ";
    getline(cin, user_input);
    cout << endl;

    count_vowels(user_input);

    cout << "a or A occurs " << found_vowels[0] << " times" << endl;;
    cout << "e or E occurs " << found_vowels[1] << " times" << endl;;
    cout << "i or I occurs " << found_vowels[2] << " times" << endl;;
    cout << "o or O occurs " << found_vowels[3] << " times" << endl;;
    cout << "u or U occurs " << found_vowels[4] << " times" << endl;;
}