#include<iostream>
using namespace std;

int main () {

  float sub1, sub2, sub3, sub4, sub5;

  float total = 0.00, percentage = 0.00, average = 0.00;

  char grade;

  cout<< "Enter the marks of Physics: ";
  cin>> sub1;
  cout<< "Enter the value of Chemistry: ";
  cin>> sub2;
  cout<< "Enter the value of Biology: ";
  cin>> sub3;
  cout<< "Enter the value of Maths: ";
  cin>> sub4;
  cout<< "Enter the value of Computer: ";
  cin>> sub5;

  total=sub1 + sub2 + sub3 + sub4 + sub5;
  average= total/5.00;
  percentage= (total/500)*100;

  if (average >= 90) {
    grade = 'A';
  }
  else if (average >= 80 && average < 90) {
    grade= 'B';
  }
  else if (average >= 70 && average < 80) {
    grade = 'C';
  }
  else if (average >= 60 && average < 70) {
    grade = 'D';
  }
  else if (average >= 40 && average > 50) {
    grade = 'E';
  }
  else {
    grade = 'F';
  }
    cout<< "\n The total marks = "<< total;
    cout<< "The Average marks  = "<< average;
    cout<< "The percentage     = "<< percentage;
    cout<< "The Grade          = "<< grade;


  return 0;
}
