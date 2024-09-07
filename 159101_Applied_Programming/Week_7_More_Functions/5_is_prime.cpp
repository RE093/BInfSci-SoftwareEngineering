/**

5. A prime number is an integer greater than one that is only divisible by itself and 1. Write a function
is_prime, that returns true if the parameter is a prime number and false if it is not.
 
*/

#include <iostream>
using namespace std;

bool is_prime(int number) {
    for (int i=0; i <= number; i++) {
        if (i == 0 || i == 1) {
            continue;
        }

        if (i == number ) {
            return true;
        }
        if (number % i == 0) {
            return false;
        }
    }
}

int user_input;

int main() {
    cout << "Enter a prime: ";
    cin >> user_input;

    if (is_prime(user_input)) {
        cout << "Is prime" << endl;
    } else {
        cout << "Is not prime" << endl;
    }
}