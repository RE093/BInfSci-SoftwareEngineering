/**

5. Write a program that reads in an array of student IDs in ascending order, then reads in 0 for Delete, 1
for Insert or 2 for Quit and carries out the appropriate action. It must repeatedly read in a choice and carry
out an action until 2 is entered. Display the array after each action.

*/


#include <iostream>
using namespace std;

bool edit, entering_ids;
int current_id, entered_index, select_option, selected_id, student_ids[50];

void insert_id() {
    for(int i = 0; i <= 50; i++) {
        if (student_ids[i] == 0) {
            student_ids[i] = selected_id;
            break;
        }
    }
}

void delete_id() {
    for(int i = 0; i <= 50; i++) {
        if (student_ids[i] == selected_id) {
            student_ids[i] = 0;
            break;
        }
    }
}

void list_array() {
    for(int i = 0; i <= 50; i++) {
        if (student_ids[i] != 0) {
            cout << "item: " << student_ids[i] << endl;
        }
    }
}

int main() {
    entering_ids = true;

    cout << "Type in student ID numbers in ascending order: ";
    while (entering_ids) {
        if (entered_index <= 50) {
            cout << "Enter a number: " << endl;
            cin >> current_id;
            
            if (current_id == -1) {
                entering_ids = false;
                edit = true;
            } else {
                student_ids[entered_index] = current_id;
                entered_index++;
            }

        }
        else {
            cout << "You have entered the maximum of 50 student ids" << endl;
            entering_ids = false;
            edit = true;
        }
    }
    while (edit) {
        cout << "Enter an integer to Delete(0) Insert(1) or Quit(2): ";
        cin >> select_option;
        cout << endl;

        if (select_option == 0) {
            cout << "Enter the ID number to delete: ";
            cin >> selected_id;
            delete_id();
            list_array();
        }

        if (select_option == 1) {
            cout << "Enter the ID number to insert: ";
            cin >> selected_id;
            insert_id();
            list_array();
        }
        if (select_option == 2) {
            cout << "Quitting program" << endl;
            edit = false;
        }
        // else, return to start
    }
}