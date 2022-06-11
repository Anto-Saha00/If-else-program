#include<iostream>
using namespace std;

int main () {

  char ch;
  cout<< "Enter a Character: ";
  cin>> ch;

  if ( (ch>= 'a' && ch <= 'z') || (ch >= 'A' && ch<= 'Z')) {
    cout<< "is an alphabet"<< ch;
  }
  else if (ch >= '0' && ch<= '9') {
    cout<< "is a digit"<<ch;
  }
  else {
    cout<< "is a special character"<<ch;
  }



  return 0;
}
