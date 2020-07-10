#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int wnum = 10;
  double dnum = 5.5;
  cout << dnum + wnum << endl  // 整數浮點數可以相加
       << dnum / 3.0 << endl;
  // 以下需要include cmath
  cout << pow(2, 5) << endl    // 32 
       << sqrt(36) << endl     // 6
       << round(3.4) << endl   // 3
       << ceil(4.1) << endl    // 5
       << floor(4.8) << endl   // 4
       << fmax(3, 10) << endl  // 10
       << fmin(3, 10) << endl; // 3
       
  return 0;
}