#include<iostream>

using namespace std;

int main () {

  int a;
  int b;
  int c;
  cout<< "Input three angles of a triangle";
  cin>>a>>b>>c;

  int sum=a+b+c;
  if (sum==180 && a!=0 && b!=0 &&c!=0) {
    cout<< "The triangle is valid";
  }
  else {
    cout<< "The triangle is not valid";
  }

  return 0;
}
