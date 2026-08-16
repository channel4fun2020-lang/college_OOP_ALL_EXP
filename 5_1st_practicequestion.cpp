#include<iostream>
using namespace std;

inline double cube(double n){
    return n * n * n;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin >> n;
    cout << "Cube of a number is:" << cube(n);
    return 0;
    
}
