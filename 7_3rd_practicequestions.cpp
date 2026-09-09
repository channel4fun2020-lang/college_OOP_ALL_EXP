#include <iostream>
using namespace std;

class Test {
public:
    static int x;

    void show() {
        x++;
        cout << x << endl;
    }
};

int Test::x = 0;

int main() {
    Test a, b;

    a.show();
    b.show();

    return 0;
}
