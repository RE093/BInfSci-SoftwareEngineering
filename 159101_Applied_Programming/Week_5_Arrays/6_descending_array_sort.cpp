/**

6. Write a program that reads 7 real numbers into an array, sorts them into descending order, then displays
the sorted numbers. What case would test the program most fully?

 */

#include <iostream>
using namespace std;

float real_number_array[7], temp;
int i_one, i_two, i;

int main() {
    cout << "Enter real numbers: " << endl;

    for (i=0; i<7; i++) {
        cout << i + 1 << ": ";
        cin >> real_number_array[i];
    }


    for (i_one=0; i_one<7; i_one++) {
        for(i_two=0; i_two<6; i_two++) {
            if (real_number_array[i_two] > real_number_array[i_two + 1]) {
                temp = real_number_array[i_two];
                real_number_array[i_two] = real_number_array[i_two + 1];
                real_number_array[i_two + 1] = temp;
            }
        }
    }

    for (i=6; i>=0; i--) {
        cout << "Item: " << real_number_array[i] << endl;
    }
}