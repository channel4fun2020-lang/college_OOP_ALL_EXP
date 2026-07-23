#include<iostream>
using namespace std;
class Circle{
    double r, area;
    public:
    void accept(){
        cout << "Enter the radius of the circle:";
        cin >> r;
    }
    void calc(){
        area = 3.14 * r * r;
        cout << "Area of the circle is: " << area << endl;  
    }
};
int main(){
    Circle c1;
    c1.accept();
    c1.calc();
    return 0;
}