#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int p, t;
    double temp, r, temp2;
    cout << "ENter Principal: ";
    cin >> p;
    cout << "Enter time period (in years): ";
    cin >> t;
    t = t * 12;
    cout << "Enter R.O.T per annum: ";
    cin >> r;
    r = (r / 12) * 0.01;
    r++;
    temp = pow(r, t);
    temp2 = temp / (temp - 1);
    cout << "Your EMI is: " << p * (r -1) * temp2 << endl;

    return 0;
}