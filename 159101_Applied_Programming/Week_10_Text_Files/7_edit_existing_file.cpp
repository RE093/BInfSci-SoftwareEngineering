/**

7. Create a file called words.txt with some words in it, for example:
Sing
Dream
Write a program to modify all the words in the file by adding “ing” to the end of each word, like this:
Singing
Dreaming

*/

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int line_index = 0;
string filename = "words.txt", line, new_content[100];
fstream datafile;

int main() {
    datafile.open(filename.c_str(), fstream::in);

    if (datafile.is_open() == false) {
        cout << "Something went wrong" << endl;
        return 1;
    }

    while(getline(datafile, line)) {
        new_content[line_index] = line + "ing";
        line_index++;
    }
    datafile.close();
    datafile.open(filename.c_str(), fstream::out | fstream::trunc);

    if (datafile.is_open() == false) {
        cout << "Something went wrong" << endl;
        return 1;
    }

    for(int i=0; i<line_index; i++) {
        cout << "hello " << new_content[i] << endl;
        datafile << new_content[i] << endl;
    }

    datafile.close();
}