#include <iostream>
#include <iomanip>
using namespace std;

/**

5. Write a program that uses a for loop to display a conversion table for temperatures. The formula is
Fahrenheit = Celsius * 1.8 + 32. Your program should display a table that looks like this:
Conversion from degrees Celsius to Fahrenheit

Celsius Fahrenheit
0 32.0
5 41.0
10 50.0

 */

int max_celcius;
float fahrenheit;

int main() {
    max_celcius = 100;

    cout << "Celcius";
    cout.width(12);
    cout << "Fahrenheit" << endl;

    for (int i = 0; i <= max_celcius; i += 5) {
        fahrenheit = i * 1.8 + 32;

        cout.width(4);
        cout << i;

        cout.width(12);
        cout << setprecision(1) << fixed << fahrenheit << endl;
    }
}