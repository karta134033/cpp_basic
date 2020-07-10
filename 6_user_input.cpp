#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  cout << "Enter your name: ";
  getline(cin, name);  // 取得字串需要用getline
  cout << "Hi," << name << endl;

  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << "You are " << age << " years old." << endl;
  
  return 0;
}