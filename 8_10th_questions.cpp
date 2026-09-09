#include <iostream>
using namespace std;

class Staff
{
    string name, post;
    float salary;

public:
    void accept()
    {
        cout << "Enter Name, Post, Salary: ";
        cin >> name >> post >> salary;
    }

    void display()
    {
        if(post == "HOD")
            cout << name << post << salary << endl;
    }
};

int main()
{
    Staff s[5];

    for(int i = 0; i < 5; i++)
        s[i].accept();

    cout << "HOD Details:" <<endl;

    for(int i = 0; i < 5; i++)
        s[i].display();

    return 0;
}
