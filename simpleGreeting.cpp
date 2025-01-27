#include <iostream>

int main() {
    char name[100]; // Declare a character array to store the name

    std::cout << "Hello, what is your name: ";
    std::cin.getline(name, 100); // Use cin.getline to read the input

    std::cout << "Hello, " << name << " nice to meet you!" << std::endl;

    return 0;
}