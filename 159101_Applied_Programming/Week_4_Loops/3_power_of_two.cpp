#include <iostream>
using namespace std;

/**
Write a program that reads in a value from the user. The value must be a power of 2. The program must then
display all powers of 2
 */

int user_input, current_value;

int main() {
    cout << "Please enter a number thats a power of 2" << endl;
    cin >> user_input;
    current_value = 1;

    while(current_value <= user_input) {
        cout << current_value << endl;
        current_value *= 2;
    }
}