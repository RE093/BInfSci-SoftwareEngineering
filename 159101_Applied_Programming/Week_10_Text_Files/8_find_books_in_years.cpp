/**

8. Find the program in Section 10 of the notes that reads the books.txt file and searches for a particular
author. Modify the program so that it finds all books published between 1950 and 1999. You will need to
set up a file called books.txt that has appropriate test data.

*/

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

fstream bookfile;
void breakstring(string s);
int lowest_year=1950, highest_year=1999;
string filename, line, title, author, yearstring;
vector<string> books;

int main() {
    cout << "Enter the FULL name of the file: ";
    cin >> filename;
    cin.ignore();

    bookfile.open(filename.c_str(), fstream::in);

    if (!bookfile.is_open()) {
        cout << "ERROR: not able to open " << filename << endl;
        return 1;  
    }

    while (getline(bookfile, line)) {
        if (!line.empty()) {
            breakstring(line);

            int yearnumber = stoi(yearstring);
            if (yearnumber > lowest_year && yearnumber < highest_year) {
                books.push_back(yearstring + " " + title + " " + author);
            }
        }
    }

    bookfile.close();

    for (auto& book : books) {
        cout << book << endl;
    }
    return 0;
}

void breakstring(string s) {
    int total, i = 0;

    title = "";
    while (i < s.length() && s[i] != ';') {
        title = title + s[i];
        i++;
    }
    i++;

    author = "";
    while (i < s.length() && s[i] != ';') {
        author = author + s[i];
        i++;
    }
    i++;

    yearstring = "";
    while (i < s.length()) {
        yearstring = yearstring + s[i];
        i++;
    }
}
