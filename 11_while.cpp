#include <iostream>
#include <limits.h>
#include <time.h>

using namespace std;

int main() {
  int index = 1;
  clock_t  start, end;  // 儲存時間用的變數
  start = clock();
  while( index < INT_MAX) {
    index++;
  }
  end = clock();
  double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  cout << "time consumed: " << cpu_time_used << endl;
  return 0;
}