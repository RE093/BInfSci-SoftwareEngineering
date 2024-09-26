/**

1. Write a program that accepts a number of names and phone numbers. The program must save the names
and phone numbers in a file where each line looks like this:
name;number

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int current_index;
string current_input, names[100], numbers[100];
string filename = "contacts.txt";
fstream datafile;

bool open_file() {
    datafile.open(filename.c_str(), fstream::out);

    if (datafile.is_open() == false) {
        cout << "Something went wrong opening the file" << endl;
        return false;
    }
    return true;
}

void save_inputs_to_file(string user_input) {
    datafile << user_input << endl;
}

void close_file() {
    datafile.close();
    cout << "Inputs have been saved.";
}

int main() {
    current_index = 0;
    bool file_opened = open_file();

    if (!file_opened) {
        return 0;
    }

    while (true) {
        cout << "Enter a phonumber;name in that format: ";
        getline(cin, current_input);

        if (current_input == "Q" || current_input == "q") {
            break;
        }

        save_inputs_to_file(current_input);
        current_index++;
    }

    close_file();
}