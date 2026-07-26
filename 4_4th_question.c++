#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    public:
    void accept();
    void display();
};
void Student::accept(){
    cout << "Enter roll number:" << endl;
    cin >> roll;
    cout << "Enter name of student:" << endl;
    cin >> name;
}
void Student::display(){
    cout << "Roll number of student is:" << roll << endl;
    cout << "Name of student is:" << name << endl;
}
int main(){
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}