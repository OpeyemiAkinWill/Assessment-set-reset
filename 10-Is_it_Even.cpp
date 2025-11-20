#include <iostream>
#include <string>
using namespace std;

// Function that checks if a number is even or odd
string checkEvenOdd(int num) {
    if (num % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int number;
   
    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> number;
    // Call the function and get the message
    string result = checkEvenOdd(number);
    // Output the message
    cout << result << endl;
    return 0;
}
