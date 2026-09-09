#include <iostream>
using namespace std;

class B;

class A{
    int a;

public:
    void accept(){
        cout << "Enter value of A: ";
        cin >> a;
    }

    friend int add(A, B);
};

class B
{
    int b;

public:
    void accept(){
        cout << "Enter value of B: ";
        cin >> b;
    }

    friend int add(A, B);
};

int add(A x, B y)
{
    return x.a + y.b;
}

int main()
{
    A obj1;
    B obj2;

    obj1.accept();
    obj2.accept();

    cout << "Addition = " << add(obj1, obj2);

    return 0;
}
