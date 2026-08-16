#include<iostream>
using namespace std;

inline double simp(double p,float r,int t){
  return p * r * t / 100;
}

int main(){
  double p,r,t;

  cout<<"Enter principal amount: ";
  cin>>p;
  cout<<"Enter rate of interest: ";
  cin>>r;
  cout<<"Enter time of the simple interest(in years): ";
  cin>>t;

  cout<<"Simple interest is:" << simp(p,r,t);
  return 0;
}
