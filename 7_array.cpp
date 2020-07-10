#include <iostream>

using namespace std;

int main() {
  int lucky_nums[] = {5, 2, 0, 9, 1, 4};      // 只能存6個數值
  int lucky_nums_v2[20] = {5, 2, 0, 9, 1, 4}; // 能存20個數值
  int lucky_nums_v3[30];

  cout << lucky_nums[3] << endl; // 9
  lucky_nums[3] = 8;
  cout << lucky_nums[3] << endl; // 8

  cout << lucky_nums_v2[10] << endl; // 0
  lucky_nums_v2[10] = 80;
  cout << lucky_nums_v2[10] << endl; // 80

  return 0;
}