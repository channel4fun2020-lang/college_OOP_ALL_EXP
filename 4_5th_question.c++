#include<iostream>
using namespace std;
class Rect{
    double length;
    double breadth;
    public:
    void accept();
    void display();
};
void Rect::accept(){
    cout << "Enter length of rectangle:" << endl;
    cin >> length;
    cout << "Enter breadth of rectangle:" << endl;
    cin >> breadth;
}
void Rect::display(){
    cout << "Length of rectangle is:" << length << endl;
    cout << "Breadth of rectangle is:" << breadth << endl;
    cout << "So Area of rectangle is:" << length*breadth << endl;
}
int main(){
    Rect r1;
    r1.accept();
    r1.display();
    return 0;
}