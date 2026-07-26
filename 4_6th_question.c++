#include<iostream>
using namespace std;
class Square{
    double side;
    public:
    void accept(){
        cout << "Enter side of square:" << endl;
        cin >> side;
    }
    void display(){
        cout << "Side of square is:" << side << endl;
        cout << "So Area of square is:" << side*side << endl;
    }
}; 
int main(){
    Square s1;
    s1.accept();
    s1.display();
    return 0;
}