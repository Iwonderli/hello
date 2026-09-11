#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "What's your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Welcome to C++!" << std::endl;
    return 0;
}
