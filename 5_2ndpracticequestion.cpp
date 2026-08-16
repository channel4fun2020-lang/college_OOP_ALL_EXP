#include<iostream>
using namespace std;

inline double max(int a,int b){
  if (a > b)
    return a;
  else
    return b;
}

int main(){
  double a, b;

  cout<<"Enter two number:";
  cin >> a >> b;

  cout<<"Maximum number is:"<< max(a,b);
  return 0;
}
