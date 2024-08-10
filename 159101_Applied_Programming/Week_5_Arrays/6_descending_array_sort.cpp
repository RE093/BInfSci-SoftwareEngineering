/**

6. Write a program that reads 7 real numbers into an array, sorts them into descending order, then displays
the sorted numbers. What case would test the program most fully?

 */

#include <iostream>
#include <algorithm>
using namespace std;

float real_number_array[7];

int main() {
    for (int i=0; i<7; i++) {
        cout << "Enter real number " << i + 1 << ": ";
        cin >> real_number_array[i];
    }

    sort(real_number_array, real_number_array + 7);

    for (int i=7; i>0; i--) {
        cout << "Item " << i << ": " << real_number_array[i-1] << endl;
    }
}