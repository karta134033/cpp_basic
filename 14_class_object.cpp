#include <iostream>

using namespace std;

class Book {
  public:
    string title;
    string author;
    int pages;
};

class Box {
  public:
    int width;
    int height;

    Box() {  // 建構子在創建物件時會被呼叫
      width = 9999;
      height = 9999;
      cout << "Creating Default Box" << endl;
    }

    Box(int _width, int _height) {  // 可以創建多個建構子 
      width = _width;
      height = _height;
      cout << "Creating Box" << endl;
    }
};

class Student {
  private:
    double gpa;

  public:
    string name;
    string major;
    Student(string _name, string _major, double _gpa) {
      name = _name;
      major = _major;
      gpa = _gpa;
    }

    bool has_honors() {
      if (gpa >= 3.5) {
        return true;
      } 
      return false;
    }

    void set_gpa(double _gpa) {
      gpa = _gpa;
    }

    double get_gpa() {
      return gpa;
    }
};

int main() {
  Book book;  // book需為小寫
  book.title = "Milkshop";
  book.author = "shop";
  book.pages = 50;

  cout << book.title << endl;

  Box box(50, 1000);
  
  cout << box.width << endl;  // 50
  cout << box.height << endl; // 1000
  box.width = 1000;
  cout << box.width << endl;  // 1000

  Box box2;
  cout << box2.width << endl;  // 9999

  Student student1("Tom", "C", 4.3);
  Student student2("Sam", "Java", 3.3);
  cout << student1.has_honors() << endl;  // 1 (True)
  cout << student2.has_honors() << endl;  // 0 (False)

  student2.set_gpa(4.0);
  cout << student1.get_gpa() << endl;     // 4.0
  cout << student1.has_honors() << endl;  // 1 (True)
  return 0;
}