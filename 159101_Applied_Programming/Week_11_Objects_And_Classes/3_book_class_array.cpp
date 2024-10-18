/**

3. Use the book class in (2) above to set up an array of book objects. Use the methods you designed in
(2) above to read and display the data for several books.

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

    Book books[3];

    books[0].load_data("The Great Gatsby", "F. Scott Fitzgerald", 1925, true);
    books[1].load_data("The Catcher in the Rye", "J.D. Salinger", 1951, false);

    books[1].display_data();
}