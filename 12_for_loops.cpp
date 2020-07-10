#include <iostream>

using namespace std;

int main() {
  const int nums_size = 10;
  int nums[nums_size] = {1, 2, 3, 4};

  for (int i = 0; i < nums_size; i++) {
    cout << nums[i] << endl;
  }
  
  return 0;
}