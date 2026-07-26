// scientific calc
#include <iostream>
#include <string>
#include <cmath>
#include <numbers>
using namespace std;
int main(){
    double a,b;
    string de;
    cout << "Enter First No.: ";
    cin >> a;
    cout << "Enter Your Second No.: ";
    cin >> b;
    cout << "\n Enter a choice (+, -, *, /, sin, cos)\n";
    cin >> de;
    
    if (de == "+"){
        cout << "Answer is: " << a+b << endl;
    }else if(de == "-"){
        cout << "Answer is: " << a-b << endl;
    }else if(de == "*"){
        cout << "Answer is: " << a*b << endl;
    }else if(de == "/"){
        cout << "Answer is: " << a/b << endl;
    }else if(de == "sin"){
        cout << "Answer is: " << sin(a) << endl;
    }else if(de == "cos"){
        cout << "Answer is: " << cos(a) << endl;
    }else{
        cout << "Invalid value." << endl;
    }
    
    
    return 0;
}