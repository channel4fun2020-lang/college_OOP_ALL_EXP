#include<iostream>
using namespace std;
int num = 100;
int main(){
    num = 50;
    cout << num << endl;
    cout << ::num << endl;
    return 0;

}
