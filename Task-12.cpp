#include<iostream>
using namespace std;

int main () {

  float n1, n2, n3;

  cout<< "Enter the first number: ";
  cin>> n1;
  cout<< "Rnter the second number: ";
  cin>> n2;
  cout<< "Enter the third number: ";
  cin>> n3;

  if (n1 > n2 && n1 > n3) {
    cout<< "Largest number: "<<n1;
  }
  if (n2 > n3 && n2 > n1) {
    cout<< "Largest number: "<<n2;
  }
  if (n3 > n1 && n3 > n2) {
    cout<< "Largest number: "<< n3;
  }



  return 0;
}
