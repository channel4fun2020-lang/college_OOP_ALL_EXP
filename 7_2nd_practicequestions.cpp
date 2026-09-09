#include <iostream>
using namespace std;

class Employee {
    static int count;

public:
    Employee() {
        count++;
    }

    static void show() {
        cout << "Employees = " << count;
    }
};

int Employee::count = 0;

int main() {
    Employee e1, e2, e3;
    Employee::show();

    return 0;
}
