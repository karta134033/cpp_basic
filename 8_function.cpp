#include <iostream>
#include <string>

using namespace std;

double Cube (double num) {
  return num * num * num;
}

void Hi(string username) {
  cout << "Hi, " << username << endl;
}

void Hello (string username);  // 因為Hello()放在main()下方，因此需要先在main上方宣告。

int main() {
  string username;
  cout << Cube (5.0) << endl;
  cout << "Enter your name: ";
  getline(cin, username);
  Hello(username);
  Hi(username);
  Hi("super user");
  return 0;
}

void Hello(string username) { 
  cout << "Hello, " << username << endl;
}