#include<iostream>

using namespace std;

int main () {

  int side1, side2 ,side3;
  cout<< "Enter the three sides of a triangle: ";
  cin>> side1>> side2 >> side3;

  if (side1==side2 && side2==side3) {
    cout<< "This is an Equilateral triangle";
  }
  else if (side1==side2 || side2==side3 || side1==side3) {
    cout<< "This is an Isosceles triangle";
  }
  else {
    cout<< "This is a Scalene triangle";
  }


  return 0;
}
