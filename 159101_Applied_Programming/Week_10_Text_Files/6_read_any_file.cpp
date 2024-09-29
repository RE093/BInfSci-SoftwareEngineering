/**

6. Write a program that reads lines from a file and displays them on the screen. Enter the name of your
program so that the program displays itself on the screen.

*/

// current_file = 159101_Applied_Programming/Week_10_Text_Files/6_.cpp

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string filename, line;
fstream datafile;

int main() {

    cout << "Enter a file to read: ";
    getline(cin, filename);

    datafile.open(filename.c_str(), fstream::in);
    if (datafile.is_open() == false) {
        cout << "Something went wrong opening the file" << endl;
    }
    
    while(getline(datafile, line)) {
        cout << line << endl;
    }

    datafile.close();
}