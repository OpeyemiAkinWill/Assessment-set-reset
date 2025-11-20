#include <iostream>

#include <string>

using namespace std;

// Asking for the capital of France
int main() {
  string capital; // To store the user's answer
  cout << "Enter the capital of France: ";
  cin >> capital;
  if (capital == "Paris") { // the condition statement – if condition is met 
    cout << "Correct!" << endl;
  } else { // if condition is not met then do this?
    cout << "Wrong, try again." << endl;
  }

  return 0;
}
