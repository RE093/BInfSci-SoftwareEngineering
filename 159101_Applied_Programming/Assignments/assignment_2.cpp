#include <iostream>
#include <iomanip>
using namespace std;

bool judges_accepted, mark_accepted;
int i, i_inner, number_of_judges;
float current_mark, sort_temp, mark_temp, final_mark, marks_array[8];

int main() {
    // Part 1: Get the number of judges
    cout << "Enter number of judges: ";

    while (!judges_accepted) {
        cin >> number_of_judges;

        if (number_of_judges >= 4 && number_of_judges <= 8) {
            judges_accepted = true;
        } else {
            cout << "Invalid. Enter number of judges again (4 to 8): ";
        }
    }

    // Part 2: Get the judges marks
    for (i=0; i<number_of_judges; i++) {
        cout << "Enter mark for Judge " << i+1 << ": ";

        while (!mark_accepted) {
            cin >> current_mark;

            if (current_mark >= 0.0 && current_mark <= 10.0) {
                marks_array[i] = current_mark;
                mark_accepted = true;
            } else {
                cout << "Invalid. Enter mark again (0.0 to 10.0): ";
            }
        }

        mark_accepted = false;
    }

    // Part 3: Sort the marks array
    for (i=0; i<number_of_judges; i++) {
        for (i_inner=0; i_inner<number_of_judges-1; i_inner++) {
            if (marks_array[i_inner] > marks_array[i_inner + 1]) {
                sort_temp = marks_array[i_inner];
                marks_array[i_inner] = marks_array[i_inner + 1];
                marks_array[i_inner + 1] = sort_temp;
            }
        }
    }

    // Part 4: Calculate the final mark minus lowest and highest judges marks
    for (i=1; i<number_of_judges-1; i++) {
        mark_temp += marks_array[i];
    }
    final_mark = mark_temp / (number_of_judges - 2);

    cout << "Final mark: " << fixed << setprecision(2) << final_mark;
}