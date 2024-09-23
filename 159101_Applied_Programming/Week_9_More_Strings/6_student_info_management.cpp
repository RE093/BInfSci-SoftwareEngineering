/**

6. Write a program that repeatedly reads in a line containing a name (might be any number of words), an
ID number (7 digits) and a mark, separated by semi-colons, until the user chooses to quit. After each line
has been read in, the program should run through the string, storing the data in the three variables name
(a string), id (a string) and mark (an integer) and printing these out. Example:
Type in name;id;mark or Q to stop: Cecil B. DeMille;9835671;68
Name: Cecil B. DeMille ID: 9835671 Mark: 68
Type in name;id;mark or Q to stop: Frodo Baggins;6511103;70
Name: Frodo Baggins ID: 6511103 Mark: 70
Type in name;id;mark or Q to stop: Q

*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

struct Student {
    string name;
    string id;
    string mark;
};

Student student_array[100];
int user_index = 0;

void parse_user_into_array(string user_input) {
    int stage = 1;
    string user_name="", user_id="", user_mark="";

    for (int i=0; i<user_input.length(); i++) {
        char current_letter = user_input[i];
        if (current_letter == ';') {
            stage++;
            continue;
        }
        if (stage == 1) {
            user_name += current_letter;
        }
        if (stage == 2) {
            user_id += current_letter;
        }
        if (stage == 3) {
            user_mark += current_letter;
        }
    }

    if (user_name.length() && user_id.length() && user_mark.length()) {
        student_array[user_index].name = user_name;
        student_array[user_index].id = user_id;
        student_array[user_index].mark = user_mark;
        user_index++;
    }
}

void enter_user_information() {
    string user_input;

    while(true) {
        cout << "Type in name;id;mark or Q to stop: ";
        getline(cin, user_input);

        if (user_input == "Q") {
            break;
        }

        parse_user_into_array(user_input);
    }
}

void retrieve_user_information(int selected_index) {
    Student retrieved_user = student_array[selected_index];

    cout << "Name: " << retrieved_user.name << " ID: " << retrieved_user.id << " Mark: " << retrieved_user.mark << endl;
}

int main() {
    while(true) {
        char current_option;
        
        cout << "Enter, or retrieve students information; Press E(nter), R(etrieve) or Q(uit)" << endl;
        current_option = getchar();

        if (current_option == 'Q') {
            break;
        }

        if (current_option == 'E') {
            enter_user_information();
        }

        if (current_option == 'R') {
            int selected_index;
            cout << "Enter a student index to find by: ";
            cin >> selected_index;
            retrieve_user_information(selected_index);
        }
    }
}