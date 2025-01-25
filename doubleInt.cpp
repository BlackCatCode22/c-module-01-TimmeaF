// C++ program to demonstrate the
// cin object
#include <iostream>
using namespace std;

// Driver Code
int main() {
  int userInput; // Declare a variable to store user input

  // Prompt the user for input
  cout << "Enter an integer: ";
  cin >> userInput; // Get input from the user

  // Double the input
  int doubleValue = userInput * 2;

  // Output the result
  cout << "The double of " << userInput << " is " << doubleValue << endl;

  return 0; // Exit the program
  }
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.