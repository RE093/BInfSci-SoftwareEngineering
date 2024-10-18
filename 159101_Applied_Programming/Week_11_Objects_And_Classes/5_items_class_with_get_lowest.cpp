/** 

5. Expand the program that was written in (4) above. Write a function that looks through the list of items
for sale and displays the item with the lowest price. This is a function (not a method) but you may need
to add new methods to the class in order to make the function work. Write a main program to test your
function.

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
        float get_price() {
            return price;
        }
        string get_name() {
            return name;
        }
};

string item_sold;
int quantity_sold;
int choice;

void sell_item(Item items[]) {
        cout << "Enter item that was just sold: ";
        getline(cin, item_sold);

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

void get_lowest_cost_item(Item items[]) {
    float lowest_cost = items[0].get_price();
    string lowest_cost_item = items[0].get_name();

    for (int i=0; i<3; i++) {
        if (items[i].get_price() < lowest_cost) {
            lowest_cost = items[i].get_price();
            lowest_cost_item = items[i].get_name();
        }
    }

    cout << "The lowest cost item is " << lowest_cost_item << " at " << lowest_cost << endl;
}

void list_all_items(Item items[]) {
    for (int i=0; i<3; i++) {
        items[i].display_data();
        cout << endl;
    }
}

int main() {
    Item items[3];

    items[0].load_data("Apple", 1.50, 10);
    items[1].load_data("Banana", 0.50, 20);
    items[2].load_data("Orange", 2.00, 5);

    while(true) {
        cout << "Welcome to the shop: " << endl;
        cout << "Press 1 to display items" << endl;
        cout << "Press 2 to sell items" << endl;
        cout << "Press 3 to list lowest cost item" << endl;
        cout << "Press 4 to exit" << endl;

        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                list_all_items(items);
                break;
            case 2:
                sell_item(items);
                break;
            case 3:
                get_lowest_cost_item(items);
                break;
            case 4:
                return 0;
                break;
        }
    }
}