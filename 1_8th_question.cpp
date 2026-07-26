#include <iostream>
using namespace std;
int main(){
    int a;
    double gst;
    
    cout << "Enter Price of Item: ₹";
    cin >> a;
    gst = a + (0.18 * a);
    cout << "\nTotal Payable Amount is: ₹" << gst << endl; 
    
    return 0;
}