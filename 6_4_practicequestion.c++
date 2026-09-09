#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    friend void display(Employee e);
};

void display(Employee e)
{
    cout << "Employee Details";
    cout << "ID = " << e.id;
    cout << "Name = " << e.name;
    cout << "Salary = " << e.salary;
}

int main()
{
    Employee e;
    e.accept();
    display(e);

    return 0;
}
