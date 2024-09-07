/**

8**. The symbol z! means
in words: z factorial
and numerically: z * (z-1) * (z-2) * (z-3) ……. * 2 * 1
Examples:
5! = 5 * 4 * 3 * 2 * 1 = 120
3! = 3 * 2 * 1 = 6
8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 40320
Write a program to calculate n combination r which is the number of different groups containing r things
that can be chosen from a set of n things. Read in a value for n and then read in a value for r and calculate
the combination using the formula:
n!
n combination r =
(n - r)! * r!
E.g. if n = 6 and r = 2 then n combination r = 6!/(4! * 2!) = 720/(24 * 2) = 15
Include a function to calculate a factorial, with prototype: int factorial(int x);

*/

#include <iostream>
using namespace std;

int n, r, calculation;
bool valid;

int factorial(int x) {
    int sum = x;

    for (int i = x-1; i>0; i--) {
        sum = sum * i;
    }

    return sum;
}

bool validate(int a, int b) {
    if (a < 0 || a < b || a > 12 || b < 0) {
        return false;
    }
    return true;
}

int main() {
    cout << endl;
    cout << "Rules: " << endl;
    cout << "n = > 0, n > r, n < 12" << endl;
    cout << "r = > 0, r < n" << endl << endl;
    
    while (!valid) {
        cout << "Enter n and r: ";
        cin >> n >> r;

        valid = validate(n, r);
    }

    calculation = factorial(n) / (factorial(n-r) * factorial(r));

    cout << calculation << endl;
}