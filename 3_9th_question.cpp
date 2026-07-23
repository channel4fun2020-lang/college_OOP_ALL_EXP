#include<iostream>
using namespace std;
int main(){
    double length = 5.5, width = 3.2;
    float area_float = (float)(length * width);
    int area_int = (int)(length * width);
    cout << "Area as float: " << area_float << endl;
    cout << "Area as integer: " << area_int << endl;
    return 0;
}