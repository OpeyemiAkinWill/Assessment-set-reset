// writing a program that add two numbers together. This is a title of the program that should be a standard practice to name a code or program so that everyone knows what the program is about.
#include <iostream> // these are the standard language used in C++ to ensure program works effectively otherwise there will error message and the program will not be executed.
using namespace std;
int main() { // this is the main program and instruction will be within the curly braces
 int x = 8;       // Declare and initialise x with 8, this is to declare the variable as a container to store the variable into, in x store 8
int y = 10;       // Declare and initialise y with 10, in y store 10
int sum = x + y; // Calculate the sum of x and y, this function is to add the variable that has been initialised at the top.
cout << sum;     // Output the result to the console, this mean the addition of the two variables will be added and display, the answer will be displayed.
return 0; // termination of program. I observed that Program stil calculated without it
}
