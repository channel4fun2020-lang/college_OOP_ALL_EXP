#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
    public:
    void accept(){
        cout << "Enter name of the student:" << endl;
        cin >> name;
        cout << "Enter roll number of the studnet:" << endl;
        cin >> roll;
    }
    void display(){
        cout << "Name of the student is:" << name << endl;
        cout << "Roll number of the student is:" << roll << endl;
    }
};
int main(){
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}