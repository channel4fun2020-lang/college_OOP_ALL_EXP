#include <iostream>
using namespace std;

int main() {
    const double hra = 0.2, da = 0.4;
    int sal;
    cout << "Enter Salary: " << endl;
    cin >> sal;
    cout << "\n";
    sal = sal + (hra * sal) + (da * sal);
    cout << "Gross Salary is: " << sal << endl;
    return 0;
}