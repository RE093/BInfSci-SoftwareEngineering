/**

4. Write a program that reads in an array of 6 real numbers, deletes the value at index 2 and displays the
changed contents of the array, then inserts 6.75 at index 1 and displays the contents again.

*/

#include <iostream>
using namespace std;

float change_array[6];
int main() {
    cout << "Enter 6 real numbers: ";
    cin >> change_array[0] >> change_array[1] >> change_array[2] >> change_array[3] >> change_array[4] >> change_array[5];

    change_array[2] = 0;
    
    cout << "Array after deleting index 2" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Item " << i << ": " << change_array[i] << endl;
    }
    cout << endl;

    change_array[1] = 6.75;

    cout << "Array after adding 6.75 to index 1" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Item " << i << ": " << change_array[i] << endl;
    }
}

