#include <iostream>
using namespace std;

class Book {
    static int count;

public:
    Book() {
        count++;
    }

    static void show() {
        cout << "Books = " << count;
    }
};

int Book::count = 0;

int main() {
    Book b1, b2, b3;
    Book::show();

    return 0;
}
