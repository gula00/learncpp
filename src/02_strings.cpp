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

    auto nameCopy = std::string_view(name); // without copying, but can't be modified

    // string_view: string shouldn't be constructed inside

    // constexpr: can be added at compile time
    constexpr std::string_view msg = "Hello!";

    std::cout << "len: " << nameLen << '\n';
    std::cout << "name: " << nameCopy << '\n';
    std::cout << "constexpr: " << msg << '\n';
    return 0;
}
