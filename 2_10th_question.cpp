#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;

    cout << "Enter Marks:" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    cout << left << setw(15) << "Subject"
         << setw(10) << "Marks" << endl;

    cout << left << setw(15) << "Math"
         << setw(10) << m1 << endl;

    cout << left << setw(15) << "Science"
         << setw(10) << m2 << endl;

    cout << left << setw(15) << "English"
         << setw(10) << m3 << endl;

    cout << left << setw(15) << "Computer"
         << setw(10) << m4 << endl;

    cout << left << setw(15) << "History"
         << setw(10) << m5 << endl;

    return 0;
} 