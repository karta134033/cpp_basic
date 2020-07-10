#include <iostream>

using namespace std;

int main() {
  bool is_hard = true;
  bool is_important = false;

  if (is_hard && is_important) {
    cout << "This question is hard and important" << endl;
  } else if (is_hard && !is_important) {
    cout << "This question is hard, but not important" << endl;
  } else if (!is_hard && is_important) {
    cout << "This question is important, but not hard" << endl;  
  } else {
    cout << "This question is neither hard nor important" << endl;  
  }

  return 0;
}