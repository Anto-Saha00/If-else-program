#include<iostream>

using namespace std;

int main () {

  char ch;
    cout<< "Enter any character:";
    cin>> ch;

     if (ch>= 'a' && ch<= 'z') {
        cout<< ch<< "is lowercase alphabet.";
     }
     else (ch>= 'A' && ch<= 'Z') {
        cout<< ch<< "is uppercase.";
     }

  return 0;
}
