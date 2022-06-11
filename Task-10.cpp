#include<iostream>

using namespace std;

int main () {

  int cp, sp, profit,loss;
  cout<< "Enter the cost price ";
  cin>> cp;
  cout<< "Enter the selling price ";
  cin>>sp;

  if (sp>cp) {
    profit=sp-cp;
    cout<< "Profit: "<< profit<< endl;
  }

  else if (cp>sp) {
    loss=cp-sp;
    cout<< "loss of "<<loss<<endl;
  }
  else {
    cout<< "No profit no loss";
  }

  return 0;
}
