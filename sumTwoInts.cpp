#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Greet user with a fun message
    cout << "Welcome to the Magic Number Summing Machine!" << endl;
    cout << "Please enter two whole numbers, and I'll add them up for you for no cost! ";

    // Get the first number
    cout << "Enter the first number: " << endl;
    cin >> num1;

    // Get the second number
    cout << "Enter the second number: " << endl;
    cin >> num2;

    // Calculate the Sum
    int sum = num1 + num2;

    // Show the results with a creative message
    cout << "Amazing! The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;
    cout << "Keep adding, and keep having fun!" << endl;

    return 0;
}