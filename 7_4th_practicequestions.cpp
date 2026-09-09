#include <iostream>
using namespace std;

class Bank {
    static int count;

public:
    Bank() {
        count++;
    }

    static void show() {
        cout << "Accounts = " << count;
    }
};

int Bank::count = 0;

int main() {
    Bank a, b, c, d;
    Bank::show();

    return 0;
}
