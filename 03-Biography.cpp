#include <iostream>

#include <string>

#include <limits> // for input validation

using namespace std;

int main() {
  string first, second, town;
  int years;

  cout << "Enter your First name: ";
  cin >> first;

  cout << "Enter your Second name: ";
  cin >> second;

  cout << "Enter your hometown: ";
  cin >> town;

  cout << "Enter your age: ";
  while (!(cin >> years)) {
    cout << "Invalid input. Please enter a number for age: ";
    cin.clear(); // clear error flag
    cin.ignore(numeric_limits < streamsize > ::max(), '\n'); // discard invalid input
  }

  // Lock in values as constants after validation
  const string Firstname = first;
  const string Secondname = second;
  const string hometown = town;
  const int age = years;

  cout << Firstname << " " << Secondname << " is " << age <<
    " years old and from " << hometown << "." << endl;

  return 0;
}
