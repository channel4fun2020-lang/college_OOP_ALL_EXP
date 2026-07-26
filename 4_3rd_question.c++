#include<iostream>
using namespace std;
class Box{
    double l , b , h;
    public:
    void accept(){
        cout << "Enter length,breadth and height of box:";
        cin >> l >> b >> h;
    }
    double volume(){
        cout << "Volume of the box is:" << l*b*h << endl;
        return l*b*h;
    }
};
int main(){
    Box b1;
    b1.accept();
    b1.volume();
    return 0;
}