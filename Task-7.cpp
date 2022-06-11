#include<iostream>

using namespace std;

int main () {\

  int side1, side2 , side3;

  cout<< "Enter the three sides of a triangle: ";
  cin>> side1 >> side2 >> side3;

  if ( (side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2) ) {
    cout<< "The triangle is valid";
  }
  else {
    cout<< "The triangle is invalid";
  }

  return 0;
}
