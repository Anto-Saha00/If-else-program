#include<iostream>
using namespace std;

int main () {

  char letter;
  cout<< "Enter a letter: ";
  cin>> letter;

  if ( letter== 'A' || letter== 'a' || letter== 'E' || letter== 'e' || letter== 'I' || letter== 'i' || letter== 'O' || letter== 'o' || letter== 'U' || letter== 'u' ) {
    cout<< "vowel";
  }
  else {
    cout<< "Consonant";
  }




  return 0;
}
