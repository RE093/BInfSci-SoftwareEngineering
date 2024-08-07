/**

2. Write a program that reads several positive integer values into an array. Use a trailing value of –1 to stop
the input. Then display the maximum value and the index of the element that contains the maximum value.
What sort of loop should you use and why?

 */


#include <iostream>
#include <cmath>
using namespace std;

int current_value, array_index, highest_value, highest_index;
float max_array[10];

int main() {
    while(true) {
        cout << "Enter a value: ";
        cin >> current_value;

        if (current_value == -1) {
            for (int i = 0; i < 10; i++) {
                if (max_array[i] > highest_value) {
                    highest_value = max_array[i];
                    highest_index = i;
                }
            }
            cout << "Highest value: " << highest_value << endl;
            cout << "Highest index: " << highest_index << endl;
            exit(10);
        }

        else {
            max_array[array_index++] = abs(current_value);
        }
    }
}