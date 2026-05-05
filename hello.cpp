#include <iostream>
#include <string>

void greet(std::string name) {
    std::cout << "Hello, " << name << "! Welcome to Day 1 of 120." << std::endl;
}

int main() {
    greet("World");
    return 0;
}