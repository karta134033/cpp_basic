#include <iostream>

using namespace std;

int main() {
  char character = 'A';                  // char 需要用單引號
  string noun = "Apple";                 // string 則用雙引號
  int number = -10;                      // 可為正負
  float single_precision_decimal = 0.1;  // 4 Bytes
  double double_precision_decimal = 0.2; // 可以比float更加精確 (8 Bytes)
  bool true_or_false = true;
  cout << character << endl
       << noun << endl
       << number << endl
       << single_precision_decimal << endl
       << double_precision_decimal << endl
       << true_or_false << endl;

  return 0;
}