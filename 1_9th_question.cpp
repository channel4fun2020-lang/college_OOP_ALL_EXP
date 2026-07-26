#include <iostream>
using namespace std;
int main(){
    double a;
    cout << "Enter Distance in Km: ";
    cin >> a;
    cout << "\nDistance in meters is: " << a * 1000 << endl; 
    cout << "Distance in centimeters is: " << a * 100000 << endl;
    
    return 0;
}