/**

2. Write a function with the prototype int max(int a, int b, int c) which returns the
largest of the three values. The values must be read inside main – do not read values inside the function.

*/

#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    int highest = a;
    if (b > highest) highest = b;
    if (c > highest) highest = c;

    return highest;
}

int a, b, c;
int main() {
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;

    cout << "Highest number is: " << max(a, b, c) << endl;
}