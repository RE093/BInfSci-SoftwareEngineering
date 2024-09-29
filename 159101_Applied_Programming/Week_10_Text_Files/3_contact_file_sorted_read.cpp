/**

3. Expand your program from (2) above to display the names and numbers with the names in alphabetical
order.

*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string filename = "contacts.txt", line;
fstream datafile;

bool open_file() {
    datafile.open(filename.c_str(), fstream::in);
    if (!datafile.is_open()) {
        cout << "Something went wrong opening the file" << endl;
        return false;
    }
    return true;
}

void format_input(string file_input) {
    string name = "";
    string number = "";
    bool first_word = true;

    for (int i = 0; i < file_input.length(); i++) {
        if (file_input[i] == ';') {
            first_word = false;
            continue;
        }
        if (first_word) {
            number += file_input[i];
        } else {
            name += file_input[i];
        }
    }
    cout << "Name: " << name << endl;
    cout << "Phone Number: " << number << endl;
    cout << endl;
}

string extract_name(string contact) {
    size_t split_position = contact.find(';');
    return contact.substr(split_position + 1);
}

bool compare_names(string a, string b) {
    return extract_name(a) < extract_name(b);
}

int main() {
    vector<string> contacts;

    if (!open_file()) return 1;
    
    while (getline(datafile, line)) {
        contacts.push_back(line);
    }

    sort(contacts.begin(), contacts.end(), compare_names);

    for (int i=0; i<100; i++) {
        if (contacts[i].length()) {
            format_input(contacts[i]);
        }
    }

    return 0;
}
