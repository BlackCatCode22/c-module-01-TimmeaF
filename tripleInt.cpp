#include <iostream> // Include necessary header file
using namespace std; // Use the standard namespace

int main() {
    int userInput; // Declare a variable to store user input

    // Prompt the user for input
    cout << "Enter an integer: ";
    cin >> userInput; // Get input from the user

    //Triple the input
    int tripledValue = userInput * 3;

    // Output the result
    cout << "The triple of " << userInput << " is " << tripledValue << "." << endl;

    return 0; // Exit the program
}