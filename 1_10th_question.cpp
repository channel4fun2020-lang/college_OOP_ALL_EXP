#include <iostream>
using namespace std;

int main() {
    float maths, physics, english;
    float total, average, percentage;

    // Input marks
    cout << "Enter marks for Maths: ";
    cin >> maths;

    cout << "Enter marks for Physics: ";
    cin >> physics;

    cout << "Enter marks for English: ";
    cin >> english;

    // Calculate total, average, and percentage
    total = maths + physics + english;
    average = total / 3;
    percentage = (total / 300) * 100;

    // Display results
    cout << "\n----- Student Result -----" << endl;
    cout << "Total Marks = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    // Pass/Fail condition
    if (maths >= 35 && physics >= 35 && english >= 35)
        cout << "Result: PASS" << endl;
    else
        cout << "Result: FAIL" << endl;

    return 0;
}