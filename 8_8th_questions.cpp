#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name, department;

public:
    void accept()
    {
        cout << "Enter ID Name Department: ";
        cin >> id >> name >> department;
    }

    void display()
    {
        cout << id << name << department << endl;
    }
};

int main()
{
    Employee e[5];

    for(int i = 0; i < 5; i++)
        e[i].accept();

    for(int i = 0; i < 5; i++)
        e[i].display();

    return 0;
}
