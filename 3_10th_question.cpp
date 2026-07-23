#include<iostream>
using namespace std;
class Staff{
    int id;
    string post;
    public:
    void accept(){
        cout << "Enter the staff ID: ";
        cin >> id;
        cout << "Enter the post of the staff: ";
        cin >> post;
    }
    void display(){
        cout << "Staff ID: " << id << endl;
        cout << "Post: " << post << endl;
    }
};
int main(){
    Staff s1;
    s1.accept();
    s1.display();
    return 0;
}