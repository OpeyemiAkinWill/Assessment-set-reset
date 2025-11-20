#include <iostream>

#include <string>

using namespace std;

int main() {
  string namelist[6] = {
    "Jake",
    "Zac",
    "Ian",
    "Ron",
    "Sam",
    "Dave"
  }; // container will allocate 6 spaces for the size of the string, so the container will allow only 6 spaces.
  // Print the position 5 on the name list, [ ] is assigned to store the name.
  cout << "The selected name is: " << namelist[4] << endl; // the array value reads from 0, so Jake will be position 0, Zac is number 1 on the list, hence, Sam will be on number 4.

  // Print a congratulatory message, just to make it interactive and interesting
  cout << "Congratulations! You are correct." << endl;

  return 0;
}
