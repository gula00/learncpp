#include <iostream>
#include <string>

using namespace std::string_literals;
int main() {
    // std::string name{};
    auto name = ""s;
    // after 'cin', there will be a '\n' left, use std::ws
    std::getline(std::cin >> std::ws, name);
    // int nameLen = {static_cast<int>(name.length())};
    auto nameLen = std::ssize(name);
    std::cout << "len: " << nameLen << '\n';
    std::cout << "name: " << name << '\n';
    return 0;
}
