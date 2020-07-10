#include <iostream>

using namespace std;

int main() {
  string phrase = "Academy";
  cout << phrase[0] << endl              // 印出: A
       << phrase[2] << endl;             // 印出: a
  phrase[0] = 'B';                       // 須為單引號
  cout << phrase << endl;                // 印出: Bcademy
  cout << phrase.find("ade", 0) << endl; // 印出: 2
  // find("ade", 0) 0為預計算的起始位置
  cout << phrase.substr(0, 3) << endl; // 印出: Bca
  // substr(0, 3) 從第0個index開始到往後數三個位置(包含0)
  cout << phrase << endl; // 印出Bcademy
  return 0;
}