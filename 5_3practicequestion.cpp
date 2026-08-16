#include<iostream>
using namespace std;

inline double area(double r){
  return 3.14 * r * r;
}

int main(){
  double r;

  cout<<"Enter radius: ";
  cin>>r;

  cout<<"Area of circle: " << area(r);
  return 0;
}
