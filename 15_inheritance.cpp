#include <iostream>

using namespace std;

class Chef {
  public:
    void make_chicken() {
      cout << "The chef make chicken." << endl;
    }
    void make_steak() {
      cout << "The chef make steak." << endl;
    }
};

class ExecutiveChef : public Chef {  // 要加public 才可以取得 Chef的函式
  public:
    void manage() {
        cout << "The chef manage the resturant." << endl;
      }
};


int main() {
  ExecutiveChef executive_chef;
  executive_chef.make_steak();
  executive_chef.manage();

  return 0;
}