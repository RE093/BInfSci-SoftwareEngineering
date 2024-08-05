/**

9*. The GCD or “greatest common divisor” of two integers is the largest integer that divides them both
without a remainder. It can be computed by the Euclidean algorithm, one of the oldest known algorithms
(about 2300 years old). To find the GCD of a and b, replace the pair (a,b) by (b, a%b) and repeat until the
remainder is zero.
For example, the GCD of 975 and 330 is 15 – they are both divisible by 15, but not by any larger number:
(975, 330) → (330, 315) → (315, 15) → (15, 0).
Write a program to input two integers and print out their GCD together with the number of steps taken by
the algorithm. (It is known that the number of steps is always less than 5 times the number of digits of a.)
Use your program to find the GCD of 7762026 and 5401973.

 */


#include <iostream>
using namespace std;

int a, b, result, steps;

int main() {
    cout << "Please enter two numbers to calculate the GDP: ";
    cin >> a >> b;
    
    while(a > 0) {
        result = a % b;
        a = b;
        b = result;
        steps++;
    }

    cout << "GDP: " << result << endl;
    cout << "Steps: " << steps << endl;
}