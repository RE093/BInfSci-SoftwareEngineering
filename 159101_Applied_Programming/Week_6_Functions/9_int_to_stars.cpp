/**

9. Write a function that has an integer passed to it and displays a line containing that number of asterisks
on one line. For example, if main passes 4 to the function, the output will be: ****

*/

#include <iostream>
using namespace std;


int user_input;

void int_to_stars(int number) {
    cout << endl;
    for (int i=0; i<number; i++) {
        cout << "*";
    }
    cout << endl << endl;
}

int main() {
    cout << "Enter a number: ";
    cin >> user_input;
    int_to_stars(user_input);
}