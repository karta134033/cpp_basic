#include <iostream>

using namespace std;

int main() {
  int wnum = 0;
  double dnum = 5.5;
  cout << wnum << endl 
       << dnum++ << endl
       << dnum << endl; 
  cout << dnum++ << endl;
  return 0;
}