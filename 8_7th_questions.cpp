#include <iostream>
using namespace std;

class Customer
{
    int id;
    string name;

public:
    void accept()
    {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }

    void display()
    {
        cout << id << name << endl;
    }
};

int main()
{
    Customer c[5];

    for(int i = 0; i < 5; i++)
        c[i].accept();

    for(int i = 0; i < 5; i++)
        c[i].display();

    return 0;
}
