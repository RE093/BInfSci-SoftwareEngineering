/**

7. Each student in a class of unknown size has received a test mark out of 30. Write a program that
reads in the test mark for each student, ending input with a -1 (trailing value). Check that each mark is a
valid mark from 0 to 30. The program must display the highest and lowest marks for the test. The display
should look something like this when it runs:
Enter the mark for student 1: 27
Enter the mark for student 2: 11
etc…
Enter the mark for student n: -1
Highest mark: 29
Lowest mark: 5

 */

 #include <iostream>
 using namespace std;

int current_student, current_grade, lowest_grade, highest_grade; 

int main() {
    current_student = 1;
    lowest_grade = 0;
    highest_grade = 0;

    cout << "Enter -1 to exit" << endl;

    while (true) {
        cout << "Enter the mark for student " << current_student << ": ";
        cin >> current_grade;

        if (current_grade < 0) {
            cout << "highest mark: " << highest_grade << endl;
            cout << "Lowest mark: " << lowest_grade << endl;
            exit(10);
        }

        if (current_student == 1) {
            lowest_grade = current_grade;
            highest_grade = current_grade;
        }
        if (current_grade < lowest_grade) {
            lowest_grade = current_grade;
        }else if (current_grade > highest_grade) {
            highest_grade = current_grade;
        }

        current_student++;
    }
}