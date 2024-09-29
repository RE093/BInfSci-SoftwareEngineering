/**

4. Expand your program from either (2) or (3) above so that you can enter a particular name and then
display the phone number belonging to that name. Remember that someone may enter a name that is not in
the list. In this case, display a suitable message.

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

string extract_number(string contact) {
    size_t split_position = contact.find(';');
    return contact.substr(0, split_position);
}

string input_name;

int main() {
    open_file();
    cout << "Who's number are you looking for? ";
    getline(cin, input_name);

    while(getline(datafile, line)) {
        if (line.find(input_name) != string::npos) {
            cout << input_name << "'s " << "number: " << extract_number(line);
        }
    }
}