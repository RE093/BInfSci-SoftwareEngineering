/**

1. Write a program that reads in a character, encrypts it as a real number (see how in next sentence) and
then stores the encrypted value in an array (max of 100). To encrypt a character, subtract the position/
index it will be stored at in the array, then divide by 2. The program should do this repeatedly until * is
entered and it should print out the array values. Example of the display:
Enter several characters (end input with *):
A
c
e
*
32.5 49 49.5

*/

#include <iostream>
#include <iomanip>
using namespace std;

char user_input_char;
int position;
float temp_value, encrypted_char[100];
bool entering_values;

int main() {
    entering_values = true;
    cout << "Enter several characters (end input with *): " << endl;

    while(entering_values) {
        cin >> user_input_char;

        if (user_input_char == 42) {
            entering_values = false;
        } else {
            temp_value = user_input_char;
            encrypted_char[position] = (temp_value - position) / 2;;
            position++;
        }
    }

    for (int i=0; i<position; i++) {
        cout << fixed << setprecision(1) << encrypted_char[i] << " ";
    }
}