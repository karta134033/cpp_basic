#include <iostream>
#include <string>

using namespace std;

double cube (double num) {
  return num * num * num;
}

void hi(string username) {
  cout << "Hi, " << username << endl;
}

void hello (string username);  // 因為Hello()放在main()下方，因此需要先在main上方宣告。

int main() {
  string username;
  cout << cube (5.0) << endl;
  cout << "Enter your name: ";
  getline(cin, username);
  hello(username);
  hi(username);
  hi("super user");
  return 0;
}

void hello(string username) { 
  cout << "Hello, " << username << endl;
}