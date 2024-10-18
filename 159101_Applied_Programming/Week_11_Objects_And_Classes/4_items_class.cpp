/** 

4. A shop uses a class to store data about items for sale in the shop. This data includes:
name of item (for example: “bread”)
price of item (for example: $3.19)
number of items in stock (for example: 120)
Design the class and write suitable methods to load the data and display the data. There are many items
in the shop so you will need an array of objects. Write a function (not a method) that enters the name of
an item and how many items have just been sold. Write suitable methods for the function to use in order
to update the number of items. For example:
Enter item that was just sold: bread
How many items were sold: 2
Number of bread items in the shop is now 118
Write a main program to test your class.

*/

#include <iostream>
#include <string>
using namespace std;

class Item {
    private:
        string name;
        float price;
        int stock;
    public:
        void load_data(string n, float p, int s) {
            name = n;
            price = p;
            stock = s;
        };
        void display_data() {
            cout << "Name: " << name << endl;
            cout << "Price: " << price << endl;
            cout << "Stock: " << stock << endl;
        };
        void set_stock(int quantity) {
            stock -= quantity;
        }
        int get_stock() {
            return stock;
        }
        string get_name() {
            return name;
        }
};

string item_sold;
int quantity_sold;

int main() {
    Item items[3];

    items[0].load_data("Apple", 1.50, 10);
    items[1].load_data("Banana", 0.50, 20);
    items[2].load_data("Orange", 2.00, 5);

    while(true) {
        cout << "Enter item that was just sold: ";
        getline(cin, item_sold);

        if (item_sold == "exit") {
            break;
        }

        cout << "How many items were sold: ";
        cin >> quantity_sold;
        cin.ignore();


        for (int i=0; i<3; i++) {
            if (items[i].get_name() == item_sold) {
                items[i].set_stock(quantity_sold);
                cout << "Number of " << item_sold << " items in the shop is now " << items[i].get_stock() << endl;
                break;
            }
        }
    }
}