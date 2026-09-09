#include <iostream>
using namespace std;

class Book
{
    int id;
    string name;

public:
    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;
    }
};

int main()
{
    Book b[3];

    for(int i = 0; i < 3; i++)
        b[i].accept();

    for(int i = 0; i < 3; i++)
        b[i].display();

    return 0;
}
