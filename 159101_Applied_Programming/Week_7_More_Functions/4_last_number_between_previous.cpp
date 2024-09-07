/**

4. Write a function with 3 real numbers passed to it, that checks if the last value lies between the first two,
returning true if it does and false if it doesn’t. For example, for arguments 4.6, 8.3 and 5.25, it should
return true, for 4.6, 8.3 and 10.0 it should return false and for 7.7, 3.5 and 4.9 it should return true.
(If the case of three identical numbers bothers you, it should return true.)

Sample output:
5.25 lies between 4.60 and 8.30
10.00 does not lie between 4.60 and 8.30
4.90 lies between 7.70 and 3.50

*/

#include <iostream>
#include <iomanip>
using namespace std;


float user_inputs[3];

bool evaluate_numbers(float first, float second, float third) {
    if ((third > first && third < second) || (third < first && third > second)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << "Enter 3 real numbers: ";
    cin >> user_inputs[0] >> user_inputs[1] >> user_inputs[2];

    if (evaluate_numbers(user_inputs[0], user_inputs[1], user_inputs[2])) {
        cout << fixed << setprecision(2) << user_inputs[2] << " lies between " << user_inputs[0] << " and " << user_inputs[1] << endl;
    } else {
        cout << fixed << setprecision(2) << user_inputs[2] << " does not lie between " << user_inputs[0] << " and " << user_inputs[1] << endl;
    }
}