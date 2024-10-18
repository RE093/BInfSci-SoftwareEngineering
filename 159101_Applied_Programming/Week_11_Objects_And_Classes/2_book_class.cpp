/**

2. The library requires a class to store information about a book. Set up a class to hold data including
title, author, year of publication, and a boolean variable to indicate if the book is in the library or if the
book has been taken out. Create a method to load the data for one book. Create another method to
display the data for a book. Create another method to check if a book is in the library or not. Write a
main program to test your methods.

*/


#include <iostream>
using namespace std;

int main() {
    class Book {
        private:
            string title, author;
            int year;
            bool in_library;

        public:
            void load_data(string t, string a, int y, bool in_lib) {
                title = t;
                author = a;
                year = y;
                in_library = in_lib;
            };
            string check_in_library() {
                if (in_library) {
                    return "Yes";
                } else {
                    return "No";
                }
            };
            void display_data() {
                cout << "Title: " << title << endl;
                cout << "Author: " << author << endl;
                cout << "Year: " << year << endl;
                cout << "In library: " << check_in_library() << endl;
            };
    };

    Book new_book;

    new_book.load_data("The Great Gatsby", "F. Scott Fitzgerald", 1925, true);
    new_book.display_data();
    cout << "Is the book in the library? " << new_book.check_in_library() << endl;
}