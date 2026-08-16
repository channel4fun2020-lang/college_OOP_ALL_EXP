#include<iostream>
using namespace std;

inline void swap(double &a, double &b){
  double temp = a;
  a = b;
  b = temp;
}

int main(){
  double a,b;

  cout<<"Enter two numbers: ";
  cin>>a>>b;

  swap(a,b);

  cout<<"After swapping two numbers: " << endl;
  cout<<"a= "<< a << endl;
  cout<<"b= " << b ;
  return 0;
}
