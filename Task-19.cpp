#include<iostream>
using namespace std;

int main () {

  char ch;
  cout<< "Enter a character: ";
  cin>> ch;

  if ( (ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z')) {
    cout<< "is an alphabet"<< ch;
  }
  else {
    cout<< "is not an alphabet";
  }



  return 0;
}
