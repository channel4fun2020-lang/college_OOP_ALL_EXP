#include <iostream>
using namespace std;
int main(){
    int unit;
    cout << "Enter you bill units: " << endl;
    cin >> unit;
    if(unit <= 100){
        cout << "Your Due Bill is: ₹" << 2 * unit << endl;
    } else if(unit <= 200){
        cout << "Your due BIll is: ₹" << 3 * unit << endl;
    } else{
        cout << "Your Due Bill is: ₹" << 5 * unit << endl;
    }
    
    return 0;
}