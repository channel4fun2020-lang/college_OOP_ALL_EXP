#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    float percentage;

public:
    void accept()
    {
        cout << "Enter Roll No, Name, Percentage: ";
        cin >> roll >> name >> percentage;
    }

    void display()
    {
        if(percentage > 75)
            cout << name << endl;
    }
};

int main()
{
    Student s[10];

    for(int i = 0; i < 10; i++)
        s[i].accept();

    cout << "Students having percentage greater than 75:" << endl;

    for(int i = 0; i < 10; i++)
        s[i].display();

    return 0;
}
