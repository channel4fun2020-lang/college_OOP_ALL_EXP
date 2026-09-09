#include <iostream>
using namespace std;

class Numbers
{
    int a, b;

public:
    void accept(){
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend float average(Numbers n);
};

float average(Numbers n)
{
    return (n.a + n.b) / 2.0;
}

int main()
{
    Numbers n;
    n.accept();

    cout << "Average = " << average(n);

    return 0;
}
