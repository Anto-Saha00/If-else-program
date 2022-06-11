#include<iostream>
using namespace std;

int main () {

  int num;

  cout<< "Enter a number: ";
  cin>>num;

  if ( (num %5==0)&&(num%11==0)) {
    cout<< "is divisible by 5 and 11"<<num;
  }
  else {
    cout<< "is not divisible by 5 and 11"<<num;
  }



  return 0;
}
