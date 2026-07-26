#include <iostream>
using namespace std;
int main(){
    double w, h;
    cout << "Enter your weight: " << endl;
    cin >> w;
    cout << "Enter your height: \n" << endl;
    cin >> h;
    
    cout << "Your BMI is: " << w / (h * h) << endl;
    
    return 0;
}