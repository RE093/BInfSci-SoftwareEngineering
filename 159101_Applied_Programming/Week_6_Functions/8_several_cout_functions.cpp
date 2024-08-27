/**

8. Write an efficient program to display the following. The challenge is to think about how to reduce the
number of cout instructions by appropriate use of functions. Set up several functions and use each
function several times (or as needed). What is the minimum number of cout instructions that are needed?
on the first day of Christmas my true love gave to me
a partridge in a pear tree.
on the second day of Christmas my true love gave to me
two turtle doves,
and a partridge in a pear tree.
on the third day of Christmas my true love gave to me
three French hens,
two turtle doves,
and a partridge in a pear tree.
on the fourth day of Christmas my true love gave to me
four calling birds,
three French hens,
two turtle doves,
and a partridge in a pear tree.

*/

#include <iostream>
#include <string>
using namespace std;

int step;
string spelt_step, second_step, third_step, fourth_step, last_step;



void christmas_song() {
    cout << "on the " << spelt_step << " day of Christmas my true love gave to me" << endl;
    
    if (fourth_step.length()) {
        cout << fourth_step << endl;
    }
    if (third_step.length()) {
        cout << third_step << endl;
    }
    if (second_step.length()) {
        cout << second_step << endl;
    }
    cout << last_step << endl << endl;
}

int main() {
    step = 1;

    while(step <= 4) {
        switch(step) {
            case 1:
                spelt_step = "first";
                last_step = "a partridge in a pear tree";
                break;
            case 2:
                spelt_step = "second";
                second_step = "two turtle doves";
                last_step = "and a partridge in a pear tree";
                break;
            case 3:
                spelt_step = "third";
                third_step = "three french hens";
                break;
            case 4:
                spelt_step = "fourth";
                fourth_step = "four calling birds";
                break;
        }    

        christmas_song();
        step++;
    }
    
}