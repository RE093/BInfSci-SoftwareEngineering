/**

5. Find the program in Section 10 of the notes to append lines to a file. Use this program to help you to
write a program that reads in a new name with a phone number and then append the corresponding new line
of data to the file created in (1) above. Use your program from (2) or (3) to display the names and check
that the new name is now included in the list.

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string filename = "contacts.txt", new_contact;
fstream contact_file;

int main() {
    contact_file.open(filename.c_str(), fstream::out | fstream::app);
    
    while(true) {
        cout << "Enter number;name (q to quit): ";
        getline(cin, new_contact);
        
        if (new_contact == "q") {
            break;
        }
        
        contact_file << new_contact << endl;
    }
}