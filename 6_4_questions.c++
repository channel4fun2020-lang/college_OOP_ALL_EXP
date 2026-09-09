#include <iostream>
using namespace std;

class B;

class A
{
    int a;

public:
    void accept()
    {
        cout << "Enter value of A: ";
        cin >> a;
    }

    void display()
    {
        cout << "A = " << a << endl;
    }

    friend void swapData(A &, B &);
};

class B
{
    int b;

public:
    void getData()
    {
        cout << "Enter value of B: ";
        cin >> b;
    }

    void display()
    {
        cout << "B = " << b << endl;
    }

    friend void swapData(A &, B &);
};

void swapData(A &x, B &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    A obj1;
    B obj2;

    obj1.accept();
    obj2.accept();

    cout << "Before Swapping:";
    obj1.display();
    obj2.display();

    swapData(obj1, obj2);

    cout << "After Swapping:";
    obj1.display();
    obj2.display();

    return 0;
}
