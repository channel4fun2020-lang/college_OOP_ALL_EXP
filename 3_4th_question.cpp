#include<iostream>
using namespace std;
int main(){
    int num1;
    float num2;
    cout << "Enter an integer number: ";
    cin >> num1;
    cout << "Enter a float number: ";
    cin >> num2;
    cout << "Integer to Float: " << (float)num1 + 0.001<< endl;
    cout << "Float to Integer: " << (int)num2 << endl;    
    return 0;

}