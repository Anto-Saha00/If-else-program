#include<iostream>

using namespace std;

int main () {

  int num1,num2;
  cout<< "Enter first number:";
  cin>>num1;
  cout<< "Enter second number:";
  cin>>num2;

  if (num1>num2) {
    cout<< "First number"<< num1<< "is maximum";
  }
  else {
    cout<< "second number"<< num2<<"is minimum";
  }

  return 0;
}
