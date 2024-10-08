/**

8*
. A list of prime numbers can be generated by the “sieve algorithm”. To find all prime numbers less than
some integer n, start with a list of all integers from 2 to n-1; then mark all multiples of 2 as composite (i.e.
not prime); then mark all multiples of 3 as composite, and so on. Write a program to input an integer n,
apply the sieve algorithm, and then report the number of primes less than n.

 */


#include <iostream>
using namespace std;

int i, n, composite, list_of_n_minus[100];
int main() {
    cout << "Enter number less than 100: ";
    cin >> n;

    for (i=2; i<n-1; i++) {
        list_of_n_minus[i] = i;
    }
    
    composite = 2;

    while(composite <= n) {
        for (i=0; i<n; i++) {
            cout << "Prime " << list_of_n_minus[i] << " C= " << composite << endl;
            if (list_of_n_minus[i] % composite == 0 && list_of_n_minus[i] != composite) {
                list_of_n_minus[i] = 0;
            }
        }
        composite += 1;
    }

    cout << "Primes for " << n << " are: " << endl;

    for (i=0; i<n; i++) {
        if (list_of_n_minus[i] != 0) {
            cout << "= " << list_of_n_minus[i] << endl;
        }
    }
}