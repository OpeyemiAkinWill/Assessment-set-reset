#include <iostream>

using namespace std;

int main() {
  const int codeToTheSafe = 12345; // using constant means, this will not change. We want the user to input this number and not able to change it.
  const int maxAttempts = 5; // we want user to have 5 go at cracking the code.
  int userInput;
  int C = 0;

  while (C < maxAttempts) {
    int attemptsLeft = maxAttempts - C; // calculation to count down how many attempts left to go, by taking the maximum attempt from the attempt made.

    cout << "Enter the code to the safe (Attempt " << (C + 1) <<
      " of " << maxAttempts << "): ";
    cin >> userInput;

    if (userInput == codeToTheSafe) {
      cout << "Welcome to the Secure Area" << endl; // this is when the correct code has been entered, the user get this message in the terminal.
      return 0;
    }

    // Wrong code
    cout << "Incorrect code. Try again." << endl; // when wrong code is entered, user has chance try again.
    attemptsLeft--;
    if (attemptsLeft > 0) {
      cout << "You have " << attemptsLeft << " attempts left.\n";
    }

  }
  cout << "Too many attempts. Safe is locked." << endl; // this is when they have 5 attempt and did not manage to crack the code, the system will lock the person out.
  return 0;
}
