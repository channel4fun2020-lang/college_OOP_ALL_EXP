#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    void accept()
    {
        cout << "Enter value: ";
        cin >> value;
    }

    friend void compare(Number, Number);
};

void compare(Number n1, Number n2)
{
    if (n1.value > n2.value)
        cout << "First object is greater";
    else if (n2.value > n1.value)
        cout << "Second object is greater";
    else
        cout << "Both objects are equal";
}

int main()
{
    Number n1, n2;

    n1.accept();
    n2.accept();

    compare(n1, n2);

    return 0;
}
