/**

4. Write a function that has two letters of the alphabet passed to it and returns the difference between their
ascii codes, which main must display. Test the program with several examples including 'A' and 'a'.

 */

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

char user_input_1, user_input_2;
int convert_1, convert_2;

int ascii_difference(char a, char b) {
    convert_1 = user_input_1;
    convert_2 = user_input_2;

    return abs(convert_1 - convert_2);
}

int main() {
    cout << "Enter the first letter: ";
    user_input_1 = getchar();
    getchar();
    cout << endl;

    cout << "Emter the last letter: ";
    user_input_2 = getchar();
    cout << endl;
    
    cout << "The difference is: " << ascii_difference(user_input_1, user_input_2) << endl;
}