#include <iostream>
using namespace std;

class Student {
    int roll;
    static int count;

public:
    Student(int r) {
        roll = r;
        count++;
    }

    void show() {
        cout << "Roll = " << roll << endl;
    }

    static void total() {
        cout << "Total = " << count;
    }
};

int Student::count = 0;

int main() {
    Student s1(10), s2(20);

    s1.show();
    s2.show();

    Student::total();

    return 0;
}
