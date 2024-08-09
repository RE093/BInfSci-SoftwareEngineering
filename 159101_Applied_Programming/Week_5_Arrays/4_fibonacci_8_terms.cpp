/**

4. Write a program that stores the first 8 terms in the Fibonacci sequence (starting with 1 and 1) in an array,
and then displays the sequence.

// 1, 1, 2, 3, 5, 8, 13, 21


 */


#include <iostream>
using namespace std;


int fibonacci_array[8];

int main() {
    fibonacci_array[0] = 1;
    fibonacci_array[1] = 1;

    for (int i = 2; i < 8; i++) {
        fibonacci_array[i] = fibonacci_array[i - 2] + fibonacci_array[i - 1];
    }
    for (int i = 0; i < 8; i++) {
        cout << fibonacci_array[i] << endl;
    }
}
