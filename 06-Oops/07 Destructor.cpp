#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int bookID;

public:
    Book(string t, int id) {
        title = t;
        bookID = id;

        cout << "Book Object Created: " << title << endl;
    }

    void displayInfo() {
        cout << "\nBook Title: " << title;
        cout << "\nBook ID: " << bookID << endl;
    }

    ~Book() {
        cout << "\nBook Object Destroyed: " << title << endl;
    }
};

int main() {
    cout << "Program Started\n";

    {
        Book b1("C++ Programming", 101);
        Book b2("Data Structures", 102);

        b1.displayInfo();
        b2.displayInfo();

        cout << "\nInside Block\n";
    }

    cout << "\nOutside Block\n";

    return 0;
}
