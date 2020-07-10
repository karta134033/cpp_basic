#include <iostream>

using namespace std;

int main() {
  int age = 24;
  int *ptr_age = &age;
  double gpa = 4.3;
  string name = "Neil";

  cout << "gpa: " << gpa << endl;  // 4.3
  cout << "age: " << age << endl;  // 24
  cout << "*ptr_age: " << *ptr_age << endl;  // 24
  cout << "ptr_age: " << ptr_age << endl;    // 與&age相同
  cout << "&age: " << &age << endl;  
  cout << "&*&*&age: " << &*&*&age << endl;  // 與&age相同

  cout << "Address of age: " << &age << endl;
  cout << "Address of gpa: " << &gpa << endl;

  *&age = gpa;
  cout << "gpa: " << gpa << endl;  // 4.3
  cout << "age: " << age << endl;  // 4
  cout << "*ptr_age: " << *ptr_age << endl;  // 4

  *ptr_age = 20;
  cout << "age: " << age << endl;  // 20
  cout << "*ptr_age: " << *ptr_age << endl;  // 20
  cout << (ptr_age == &age) << endl;         // 1 (true)  註:用cout會把true轉成1 false轉成0

  return 0;
}