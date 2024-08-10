/**

5. Write a program that reads in a positive integer up to nine digits long, and sets up an array to store a count
of the number of times each of the digits 0 - 9 appears in the number. Store the number of times 0 appears,
in position 0 in your array, the number of times 1 appears, in position 1 of your array and so on. Display the
results in the format:
0 occurs 2 times
1 occurs 0 times
:
9 occurs 1 times

*/

#include <iostream>
using namespace std;


int digit_count[10];
int user_input;
int division_factor = 1;
int current_number;

int main() {
    cout << "Enter a 9 digit integer: ";
    cin >> user_input;

    for (int i=0; i < 9; i++) {
        current_number = user_input / division_factor % 10;
        
        digit_count[current_number] = digit_count[current_number] + 1;
        division_factor *= 10;
    }
    
    cout << endl;
    for (int i=0; i<=9; i++) {
        cout << i << " occurs " << digit_count[i] << " times" << endl;
    }
}