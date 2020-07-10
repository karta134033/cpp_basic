#include <iostream>

using namespace std;

int main() {
  int day_of_week;
  string day_name;
  cout << "Enter day of week: ";
  cin >> day_of_week;

  switch (day_of_week) {
  case 7:
    day_name = "Sunday";
    break;
  case 1:
    day_name = "Monday";
    break;
  case 2:
    day_name = "Tuesday";
    break;
  case 3:
    day_name = "Wednesday";
    break;
  case 4:
    day_name = "Thursday";
    break;
  case 5:
    day_name = "Friday";
    break;
  case 6:
    day_name = "Saturday";
    break;
  default:
    day_name = "Invalid";
    break;
  }

  cout << "Day name is: " << day_name;

  return 0;
}