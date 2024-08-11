/**

7. There are 7 students in a class. Write a program that reads the student ID number and a test mark for
each student. Find the average test mark for the class. Set up two new corresponding arrays that store the
ID numbers and marks of only those students who scored higher than the average mark. Display the ID
numbers and marks of students who scored above average, with ID numbers in ascending order.
 */

#include <iostream>
using namespace std;

int student_ids[7], student_marks[7], ids_above_average[7], marks_above_average[7], average_mark, marks_total;
int i, i_one, i_two, temp;

int main() {
    for (int i=0; i<7; i++) {
        cout << "Enter a student id followed by their test mark: ";
        cin >> student_ids[i] >> student_marks[i];
        marks_total += student_marks[i];
    }

    average_mark = marks_total / 7;

    for (i=0; i<7; i++) {
        if (student_marks[i] > average_mark) {
            marks_above_average[i] = student_marks[i];
        }
    }

    for (i_one=0; i_one<7; i_one++) {
        for(i_two=0; i_two<6; i_two++) {
            if (marks_above_average[i_two] > marks_above_average[i_two + 1]) {
                temp = marks_above_average[i_two];
                marks_above_average[i_two] = marks_above_average[i_two + 1];
                marks_above_average[i_two + 1] = temp;
            }
        }
    }

    for (i_one=0; i_one<7; i_one++) {
        temp = marks_above_average[i_one];

        for (i_two=0; i_two<7; i_two++) {
            if (temp == student_marks[i_two]) {
                ids_above_average[i_one] = student_ids[i_two];
            }
        }
    }
    
    for (i=0; i<7; i++) {
        if (ids_above_average[i] != 0) {
            cout << "ID: " << ids_above_average[i] << " Mark: " << marks_above_average[i] << endl;
        }
    }
}