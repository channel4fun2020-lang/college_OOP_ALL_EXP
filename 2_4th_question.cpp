#include<iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    int marks;
    public:
    void accept();
    void display();
};
void Student::accept(){
    cout << "Enter roll number:";
    cin >> rollno;
    cout << "Enter name:";
    cin >> name;
    cout << "Enter marks:";
    cin >> marks;
}
void Student::display(){
    cout << "Roll number:" << rollno << endl;
    cout << "Name:" << name << endl;
    cout << "Marks:" << marks << endl;  
}
int main(){
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}