/**

6. Each student in a class has received a test mark out of 30. Write a program that first reads in the number
of students in the class and then reads in the test mark for each student and calculates the average mark for
the test. Check that each mark is a valid mark from 0 to 30. The test marks are integers but the average
should be a real number displayed to one decimal place. Your program should look something like this
when it runs:
Number of students in the class: 14
Enter the mark for student 1: 27
Enter the mark for student 2: 11
etc…
Average: 18.7

 */

#include <iostream>
#include <iomanip>
using namespace std;

int total_students, current_grade, total_grades;
float average_grade;

int main() {
    cout << "Please enter the amount of students in the class: ";
    cin >> total_students;

    for (int i = 1; i <= total_students; i++) {
        cout << "Enter the grade for student " << i << ": ";
        cin >> current_grade;
        total_grades += current_grade;
    }

    average_grade = float(total_grades) / float(total_students);
    cout << "Average grade: ";
    cout << setprecision(1) << fixed << average_grade << endl;
}