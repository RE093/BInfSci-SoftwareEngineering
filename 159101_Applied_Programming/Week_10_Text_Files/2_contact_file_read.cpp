/**

2. Write a program that reads the file created in (1) above. Display the names and numbers on the screen in
a suitable format.

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string filename = "contacts.txt", line;
fstream datafile;

bool open_file() {
    datafile.open(filename.c_str(), fstream::in);

    if (datafile.is_open() == false) {
        cout << "Something went wrong opening the file" << endl;
        return false;
    }
    return true;
}

void format_input(string file_input) {
    string name = "";
    string number = "";
    bool first_word = true;

    for (int i=0; i<file_input.length(); i++) {
        if (file_input[i] == ';') {
            first_word = false;
            continue;
        }
        if (first_word) {
            number+=file_input[i];
        } else {
            name+=file_input[i];
        }
    }
    cout << "Name: " << name << endl;
    cout << "Phone Number: " << number << endl;
    cout << endl;
}

int main() {
    open_file();

    while(getline(datafile, line)) {
        format_input(line);
    }
}