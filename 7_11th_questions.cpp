#include <iostream>
using namespace std;

class Student {
    static int count;

public:
    Student() {
        count++;
    }

    static void show() {
        cout << "Students = " << count;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3, s4;
    Student::show();

    return 0;
}
